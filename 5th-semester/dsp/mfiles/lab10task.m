clc 
clear all 
close all

numBits = 20000;
srcBits = randi([0,1],numBits,1);

modOrder = 16;
modOut = qammod(srcBits,modOrder,'InputType','bit');
scatterplot(modOut);
chanOut = modOut;
demodOut = qamdemod(chanOut,modOrder,'OutputType','bit');
check = isequal(srcBits,demodOut);

modOut = qammod(srcBits,modOrder,'InputType','bit','UnitAveragePower',true);

SNR = 15;
chanOut = awgn(modOut,SNR);

scatterplot(chanOut);
demodOut = qamdemod(chanOut,modOrder,'OutputType','bit','UnitAveragePower',true);
check = isequal(srcBits,demodOut);

isBitError = srcBits~=demodOut;

numBitErrors = nnz(isBitError);
BER = numBitErrors/numBits;
txFilt = comm.RaisedCosineTransmitFilter;
rxFilt = comm.RaisedCosineReceiveFilter;

txFiltOut = txFilt(modOut);


SNR = 7;
chanOut = awgn(txFiltOut,SNR,'measured');

if exist('rxFiltOut','var')  % code runs after you complete Task 4
    scatterplot(rxFiltOut);
    demodOut = qamdemod(rxFiltOut,modOrder,'OutputType','bit','UnitAveragePower',true);
end


delayInSymbols = rxFilt.FilterSpanInSymbols/2 + txFilt.FilterSpanInSymbols/2;

delayInBits = delayInSymbols * bitsPerSymbol;
srcAligned = srcBits(1:(end-delayInBits));


demodAligned = demodOut((delayInBits+1):end);
numBitErrors = nnz(srcAligned ~= demodAligned);
numAlignedBits = length(srcAligned);
BER = numBitErrors/numAlignedBits;
