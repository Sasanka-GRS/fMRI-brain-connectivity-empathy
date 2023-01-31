clear

data = [];
dataCon = [];
y = load("Inferior_Parietal_Lobule\VOI_ipl_-32_-70_42_1.mat");
data.y01 = y.xY.y;
dataCon = [dataCon,y.xY.y];
y = load("Inferior_Temporal_Gyrus\VOI_itg_-64_-32_-18_1.mat");
data.y02 = y.xY.y;
dataCon = [dataCon,y.xY.y];
y = load("Middle_Frontal_Gyrus\VOI_mfg_-42_52_4_1.mat");
data.y03 = y.xY.y;
dataCon = [dataCon,y.xY.y];
y = load("Middle_Temporal_Gyrus\VOI_mtg_-58_-32_-12_1.mat");
data.y04 = y.xY.y;
dataCon = [dataCon,y.xY.y];
y = load("Orbitalis\VOI_ifgob_40_40_-8_1.mat");
data.y05 = y.xY.y;
dataCon = [dataCon,y.xY.y];
y = load("Posterior_Medial_Frontal\VOI_pmf_0_-6_62_1.mat");
data.y06 = y.xY.y;
dataCon = [dataCon,y.xY.y];
y = load("Superior_Frontal_Gyrus\VOI_sfg_16_58_36_1.mat");
data.y07 = y.xY.y;
dataCon = [dataCon,y.xY.y];
y = load("Superior_Medial_Gyrus\VOI_smg_-10_42_54_1.mat");
data.y08 = y.xY.y;
dataCon = [dataCon,y.xY.y];
y = load("Temporal_Pole\VOI_tp_-32_26_-30_1.mat");
data.y09 = y.xY.y;
dataCon = [dataCon,y.xY.y];
y = load("Triangularis\VOI_ifgt_-58_18_18_1.mat");
data.y10 = y.xY.y;
dataCon = [dataCon,y.xY.y];
data.yCon = dataCon;

save("..\386_data_voxel.mat","data");