function y = thresData(x,P)
    y = x;
    dataSorted = sort(x,'descend');
    threshold = dataSorted(P);
    y(x<threshold) = 0;
    y(x>=threshold) = 1;
end