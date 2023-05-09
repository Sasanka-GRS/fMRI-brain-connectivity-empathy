clc
clear
close all

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%% Extraction

cd extract_data\
extractData
extractLayout
extractLabels

%% Normalize

cd ..
cd normalize_data\
normalizeData

%% HPF

optionHPF = 'LS'; % Or 'EQ'

cd ..
cd hpf\
highPassFiltering(optionHPF);

%% Clustering

option1Clustering = 'KM'; % Or 'ISRM'
option2Clustering = 3; % Or 0.5

cd ..
cd clustering\
clustering(option1Clustering,option2Clustering);

%% Combination

optionCombination = 'SA'; % Or 'WA'

cd ..
cd combination\
combining(optionCombination);

%% Graph Learning

optionLearning = 'SI'; % Or 'PE', 'SP', 'SM'

windowSize = 8;

cutoffA_string = 'N'; % Or '2N'
cutoffTop = 3;

sigma_similarity = 1; % For similarity based learning

alpha_smoothness = 4; % For smoothness based learning
beta_smoothness = 10; % For smoothness based learning
iter_smoothness = 25; % For smoothness based learning

lambda_sparsity = 2.5; % For sparsity based learning

cd ..
cd graph_learning\

subjects = ["303","375","378","797","820"];

for i = 1:5
    subject = subjects(i);
    optionLearning = 'SI';
    learn(windowSize,optionLearning,cutoffA_string,cutoffTop,sigma_similarity,alpha_smoothness,beta_smoothness,iter_smoothness,lambda_sparsity,subject);
    optionLearning = 'PE';
    learn(windowSize,optionLearning,cutoffA_string,cutoffTop,sigma_similarity,alpha_smoothness,beta_smoothness,iter_smoothness,lambda_sparsity,subject);
    optionLearning = 'SP';
    learn(windowSize,optionLearning,cutoffA_string,cutoffTop,sigma_similarity,alpha_smoothness,beta_smoothness,iter_smoothness,lambda_sparsity,subject);
    optionLearning = 'SM';
    learn(windowSize,optionLearning,cutoffA_string,cutoffTop,sigma_similarity,alpha_smoothness,beta_smoothness,iter_smoothness,lambda_sparsity,subject);
end

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
cd ..
clc