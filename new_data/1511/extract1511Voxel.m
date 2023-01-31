clear

data = [];
dataCon = [];
y = load("ACC\VOI_acc_2_46_10_1.mat");
data.y01 = y.xY.y;
dataCon = [dataCon,y.xY.y];
y = load("Fusiform_Gyrus\VOI_fg_34_-34_-18_1.mat");
data.y02 = y.xY.y;
dataCon = [dataCon,y.xY.y];
y = load("Insula_Lobe\VOI_il_46_-12_4_1.mat");
data.y03 = y.xY.y;
dataCon = [dataCon,y.xY.y];
y = load("Middle_Temporal_Gyrus\VOI_mtg_-64_-42_-8_1.mat");
data.y04 = y.xY.y;
dataCon = [dataCon,y.xY.y];
y = load("Opercularis\VOI_ifgop_-50_18_14_1.mat");
data.y05 = y.xY.y;
dataCon = [dataCon,y.xY.y];
y = load("Orbitalis\VOI_ifgob_52_34_-8_1.mat");
data.y06 = y.xY.y;
dataCon = [dataCon,y.xY.y];
y = load("Superior_Medial_Gyrus\VOI_smg_-14_40_24_1.mat");
data.y07 = y.xY.y;
dataCon = [dataCon,y.xY.y];
y = load("Superior_Temporal_Gyrus\VOI_stg_42_-18_0_1.mat");
data.y08 = y.xY.y;
dataCon = [dataCon,y.xY.y];
y = load("Temporal_Pole\VOI_tp_54_10_-10_1.mat");
data.y09 = y.xY.y;
dataCon = [dataCon,y.xY.y];
data.yCon = dataCon;

save("..\1511_data_voxel.mat","data");