clc
clc clear 
clc close

filename = "FemalTalk.mp3";
[y , fs] = audioread(filename);
sound(y,fs);