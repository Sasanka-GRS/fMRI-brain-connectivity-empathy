addpath D:\spm8\spm8\

imgs=spm_select(Inf, 'image', 'get timeseries data');
V=spm_vol(imgs);
[Y,XYZ]=spm_read_vols(V);

save("completeDataOneSubject820.mat","Y","XYZ");