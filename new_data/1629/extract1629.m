y = load("ACC\VOI_acc_-6_34_-8_1.mat");
data = y.Y;
y = load("Fusiform_Gyrus\VOI_fg_26_-32_-18_1.mat");
data = [data,y.Y];
y = load("Inferior_Temporal_Gyrus\VOI_itg_-52_-4_-40_1.mat");
data = [data,y.Y];
y = load("Insula_Lobe\VOI_il_32_14_6_1.mat");
data = [data,y.Y];
y = load("Middle_Frontal_Gyrus\VOI_mfg_38_44_10_1.mat");
data = [data,y.Y];
y = load("Middle_Temporal_Gyrus\VOI_mtg_-62_-46_-12_1.mat");
data = [data,y.Y];
y = load("Opercularis\VOI_ifgop_50_14_12_1.mat");
data = [data,y.Y];
y = load("Orbitalis\VOI_ifgob_-26_32_-16_1.mat");
data = [data,y.Y];
y = load("Superior_Frontal_Gyrus\VOI_sfg_32_-12_60_1.mat");
data = [data,y.Y];
y = load("Superior_Medial_Gyrus\VOI_smg_-6_54_32_1.mat");
data = [data,y.Y];
y = load("Superior_Temporal_Gyrus\VOI_stg_-64_-48_22_1.mat");
data = [data,y.Y];
y = load("Triangularis\VOI_ifgt_-50_40_2_1.mat");
data = [data,y.Y];