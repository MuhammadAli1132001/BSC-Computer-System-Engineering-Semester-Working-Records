clc
clear all 
disp('cgpa calculator');
disp('Enter grade and credit hours of 3rd semester ');
cs=input('Enter cs grade ');
csh=input('Enter cs credit hour ');
oop=input('Enter oop grade ');
ooph=input('Enter oop credit hour ');
dld=input('Enter dld grade ');
dldh=input('Enter dld credit hour ');
la=input('Enter la grade ');
lah=input('Enter la credit hour ');
cv=input('Enter cv grade ');
cvh=input('Enter cv credit hour ');
csl=input('Enter csl grade ');
cslh=input('Enter csl credit hour ');
oopl=input('Enter oppl grade ');
ooplh=input('Enter oopl credit hour ');
dldl=input('Enter dldl grade ');
dldlh=input('Enter dldl credit hour ');

totalgrad=(cs*csh)+(csl*cslh)+(oop*ooph)+(oopl*ooplh)+(dld*dldh)+(dldl*dldlh)+(cv*cvh)+(la*lah);
ftotalcredithours=csh+cslh+ooph+ooplh+dldh+dldlh+cvh+lah;
gpa=totalgrad/ftotalcredithours;

disp('3rdnd semeter gpa is :');
disp(gpa);
semesterweightag=gpa*ftotalcredithours;
disp('Enter grade and credit hours of 3rd semester ');
ec=input('Enter es grade ');
ech=input('Enter es credit hour ');
ss=input('Enter ss grade ');
ssh=input('Enter ss credit hour ');
os=input('Enter os grade ');
osh=input('Enter os credit hour ');
pe=input('Enter pe grade ');
peh=input('Enter pe credit hour ');
dsa=input('Enter dsa grade ');
dsah=input('Enter dsa credit hour ');
ecl=input('Enter eslab grade ');
eclh=input('Enter eclab credit hour ');
ssl=input('Enter sslab grade ');
sslh=input('Enter osslab credit hour ');
osl=input('Enter oslab grade ');
oslh=input('Enter oslab credit hour ');
dsal=input('Enter dsalab grade ');
dsalh=input('Enter dsalab credit hour ');
ntotalgrad=(ec*ech)+(ss*ssh)+(pe*peh)+(dsa*dsah)+(ecl*eclh)+(ssl*sslh)+(osl*oslh)+(ssl*sslh)+(dsal*dsalh);
ntotalcredithours=ech+eclh+ssh+sslh+dsah+dsalh+peh+osh+osl;
ngpa=ntotalgrad/ntotalcredithours;
disp('4th semeter gpa is :');
disp(ngpa);
nsemesterweightag=ngpa*ntotalcredithours;

disp('cgpa is');
totalcredithours=ftotalcredithours+ntotalcredithours;

totalsemesterwtg=nsemesterweightag+semesterweightag;
cgpa=totalsemesterwtg/totalcredithours;
disp(cgpa);