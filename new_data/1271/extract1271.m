y = load("Fusiform_Gyrus\VOI_fg_-26_-16_-36_1.mat");
data = y.Y;
y = load("Inferior_Temporal_Gyrus\VOI_itg_-40_-32_-14_1.mat");
data = [data,y.Y];
y = load("Insula_Lobe\VOI_il_42_12_2_1.mat");
data = [data,y.Y];
y = load("Middle_Frontal_Gyrus\VOI_mfg_-32_38_16_1.mat");
data = [data,y.Y];
y = load("Middle_Temporal_Gyrus\VOI_mtg_-46_-2_-20_1.mat");
data = [data,y.Y];
y = load("Orbitalis\VOI_ifgob_-36_30_-22_1.mat");
data = [data,y.Y];
y = load("Posterior_Medial_Frontal\VOI_pmf_-8_-18_62_1.mat");
data = [data,y.Y];
y = load("Superior_Medial_Gyrus\VOI_smg_10_40_38_1.mat");
data = [data,y.Y];
y = load("Triangularis\VOI_ifgt_-48_34_-2_1.mat");
data = [data,y.Y];