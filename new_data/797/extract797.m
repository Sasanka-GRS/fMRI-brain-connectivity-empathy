y = load("ACC\VOI_4_52_8_1.mat");
data = y.Y;
y = load("Fusiform_Gyrus\VOI_-26_-36_-22_1.mat");
data = [data,y.Y];
y = load("Inferior_Parietal_Lobule\VOI_48_-54_52_1.mat");
data = [data,y.Y];
y = load("Inferior_Temporal_Gyrus\VOI_-38_8_-36_1.mat");
data = [data,y.Y];
y = load("Insula_Lobe\VOI_38_-6_-6_1.mat");
data = [data,y.Y];
y = load("MCC\VOI_6_32_36_1.mat");
data = [data,y.Y];
y = load("Medial_Temporal_Pole\VOI_-40_16_-30_1.mat");
data = [data,y.Y];
y = load("Middle_Frontal_Gyrus\VOI_-42_32_34_1.mat");
data = [data,y.Y];
y = load("Middle_Temporal_Gyrus\VOI_-62_-52_4_1.mat");
data = [data,y.Y];
y = load("Opercularis\VOI_42_10_10_1.mat");
data = [data,y.Y];
y = load("Orbitalis\VOI_38_34_-2_1.mat");
data = [data,y.Y];
y = load("Posterior_Medial_Frontal\VOI_8_-20_74_1.mat");
data = [data,y.Y];
y = load("Superior_Frontal_Gyrus\VOI_-12_52_42_1.mat");
data = [data,y.Y];
y = load("Superior_Medial_Gyrus\VOI_12_54_38_1.mat");
data = [data,y.Y];
y = load("Superior_Temporal_Gyrus\VOI_-42_-8_-14_1.mat");
data = [data,y.Y];
y = load("Triangularis\VOI_-54_34_18_1.mat");
data = [data,y.Y];