function learn(windowSize,option,cutoffA_string,cutoffTop,sigma_similarity,alpha_smoothness,beta_smoothness,iter_smoothness,lambda_sparsity,subject)

%% Set default parameters

if(nargin==0)
    windowSize = 8;
    option = 'SI';
    sigma_similarity = 1;
    cutoffA_string = 'N';
    cutoffTop = 3;
end

%% Add dependencies

addpath(".\functions");
addpath(".\optimization_toolbox\MOSEK\mosek\10.0\toolbox\r2017a");
addpath(".\optimization_toolbox\yalmip\YALMIP-master\YALMIP-master");
addpath(".\optimization_toolbox\yalmip\YALMIP-master\YALMIP-master\extras");
addpath(".\optimization_toolbox\yalmip\YALMIP-master\YALMIP-master\solvers");
addpath(".\optimization_toolbox\yalmip\YALMIP-master\YALMIP-master\modules");
addpath(".\optimization_toolbox\yalmip\YALMIP-master\YALMIP-master\modules\parametric");
addpath(".\optimization_toolbox\yalmip\YALMIP-master\YALMIP-master\modules\moment");
addpath(".\optimization_toolbox\yalmip\YALMIP-master\YALMIP-master\modules\global");
addpath(".\optimization_toolbox\yalmip\YALMIP-master\YALMIP-master\modules\sos");
addpath(".\optimization_toolbox\yalmip\YALMIP-master\YALMIP-master\operators");

%% Learning

if(strcmp(option,'SM'))
    smoothness(windowSize,alpha_smoothness,beta_smoothness,iter_smoothness,cutoffA_string,cutoffTop,subject);
elseif(strcmp(option,'PE'))
    pearson(windowSize,cutoffA_string,cutoffTop,subject);
elseif(strcmp(option,'SP'))
    sparsity(windowSize,lambda_sparsity,cutoffA_string,cutoffTop,subject);
else
    similarity(windowSize,sigma_similarity,cutoffA_string,cutoffTop,subject);
end

end