clear

data = [];
dataCon = [];
y = load("Fusiform_Gyrus\VOI_fg_-26_-16_-36_1.mat");
data.y01 = y.xY.y;
dataCon = [dataCon,y.xY.y];
y = load("Inferior_Temporal_Gyrus\VOI_itg_-40_-32_-14_1.mat");
data.y02 = y.xY.y;
dataCon = [dataCon,y.xY.y];
y = load("Insula_Lobe\VOI_il_42_12_2_1.mat");
data.y03 = y.xY.y;
dataCon = [dataCon,y.xY.y];
y = load("Middle_Frontal_Gyrus\VOI_mfg_-32_38_16_1.mat");
data.y04 = y.xY.y;
dataCon = [dataCon,y.xY.y];
y = load("Middle_Temporal_Gyrus\VOI_mtg_-46_-2_-20_1.mat");
data.y05 = y.xY.y;
dataCon = [dataCon,y.xY.y];
y = load("Orbitalis\VOI_ifgob_-36_30_-22_1.mat");
data.y06 = y.xY.y;
dataCon = [dataCon,y.xY.y];
y = load("Posterior_Medial_Frontal\VOI_pmf_-8_-18_62_1.mat");
data.y07 = y.xY.y;
dataCon = [dataCon,y.xY.y];
y = load("Superior_Medial_Gyrus\VOI_smg_10_40_38_1.mat");
data.y08 = y.xY.y;
dataCon = [dataCon,y.xY.y];
y = load("Triangularis\VOI_ifgt_-48_34_-2_1.mat");
data.y09 = y.xY.y;
dataCon = [dataCon,y.xY.y];
data.yCon = dataCon;

save("..\1271_data_voxel.mat","data");