fid = fopen('file');

tline = fgetl(fid);
while ischar(tline)
    fid1 = fopen(tline);
    tline1 = fgetl(fid1);
    
    s1='./corr_coeff/';
    s=strcat(s1,tline);
    fid2 = fopen(s,'wt');
    
    while ischar(tline1)
        a = load(tline1);
        a1 = a.Y;
        a2 = a1(142:151);
        a3 = a1(201:210);
        a4 = [a2; a3];
        tline1 = fgetl(fid1);
        b = load(tline1);
        b1 = b.Y;
        b2 = b1(142:151);
        b3 = b1(201:210);
        b4 = [b2; b3];
        
        res=corrcoef(a4,b4);
        result=res(1,2);
        fprintf(fid2,'%f\n',result);
        tline1 = fgetl(fid1);
    end
    
    fclose(fid1);
    fclose(fid2);
    tline = fgetl(fid);
end

fclose(fid);