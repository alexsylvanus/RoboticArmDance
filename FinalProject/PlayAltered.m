function PlayAltered ( fname, tempo )
[muscsig, fs] = audioread(fname);
sze = size(muscsig);
S = sze(1);
songlen = S/fs;
musc1 = muscsig(1:S, 1);
tempArr = findtempo2(musc1, fs);
temp = tempArr(2);
temppsec = temp/60;
totalbeats = round(songlen*temppsec);
temppsec = totalbeats/songlen;
temp = temppsec*60;
disp(temp);

tempopsec = tempo/60;
alteredsonglen = totalbeats/tempopsec;
Fs = round(S/alteredsonglen);

sound(muscsig, Fs);
prompt = 'Enter the name of the new file in .wav format: '; 
x = input(prompt);
audiowrite(x, muscsig, Fs);
end