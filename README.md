# fMRI-Empathy

This project is centered around utilizing Graph Signal Processing (GSP) tools for brain functional connectivity for empathy regions. The data for the study is not openly available, but the codes and implementation pipeline are provided to run with user-input data.

## Data formatting

The project deals with fMRI data. The requirement for using the pipeline are as follows

### Subject Data

Contains the region-wise grouped time-series of all voxels that remain after applying an appropriate mask over the raw fMRI data. The data should be packed in a struct file, stored in a MATLAB data file. The data structure inside the MATLAB data file should follow

|_ subject_data.mat
  |_ region_1
    |_ all voxels (N1xT matrix)
  |_ region_2
    |_ all voxels (N2xT matrix)

### Node locations

Contains the locations of the centers of the considered regions of interest. It is an Nx3 matrix of all region centers' (x,y,z) locations. Store it as nodes.mat.

### Node labels

Contains the labels for each node (see legend.xlsx for reference). Store it as nodeLocations.mat.

## Pre-requisite packages

The project uses YALMIP with MOSEK solver for solving optimization problems.

### YALMIP

Please follow the installation guidelines here.

### MOSEK

Please follow the installation guidelines here.

## Process flow

Create a folder named 'data' in the parent directory and place the data (subject_data.mat) in it. If the data is in the correct format, and with the right dependency installations, the pipeline should run without errors. The data is first extracted in the extract_data folder, then normalized in normalize_data, then high-pass filtered in hpf, then clustered in clustering, and finally combined to regions in combination. The data at each stage in the pipeline is stored in the respective folders. Finally, the graph learning module performs graph learning over the region-level time-series.

## Running the pipeline

To run the pipeline, make sure the data is in the right format and right location, and also make sure the dependencies are installed right and are working. To use the dependencies, change the location where they are placed, in all files in the folder .\pipeline\graph_learning\functions, where the dependencies are to be added to the MATLAB environment. Finally, in the run.m file, make appropriate choices on each of the steps and run the pipeline by running the run.m file.

#### NOTE: This pipeline is designed to run on Windows. To run the same for Ubuntu, replace all the '\' with '/' in all the files throughout the pipeline.

## Results

The results use the graphs generated in the graph learning module, that are saved in the folder .\pipeline\graph_learning\graph_data. Some of them require an emotion scale that is given by the participants. The results include

1. Edge weight vs time (plotTimeSeriesWeights.m)
2. Comparison of similarity of graphs across methods (compareInstant_303.m)
3. Graph based clustering (graphClustering.m)
4. Plotting and visualizing the obtained graphs (graphPlot.ipynb) (This uses the nilearn brain library for plotting)
5. Frequency of edges (nodeEdgeFrequency.m)
6. Time series vs Scale (timeSeriesVsScale.m)
7. Edge weight vs Scale (weightVsScale.m)

## Legend

legend.xlsx file contains the regions considered, and their labels. It is just for reference and will not be used in running the analysis/pipeline.
