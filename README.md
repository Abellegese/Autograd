
# Autograd: Automatic differentiation library
[![MIT License](https://img.shields.io/badge/License-MIT-green.svg)](https://choosealicense.com/licenses/mit/)

This library provides a simple implementation for comuting the gradient in the neural network using the method called autodiff. 
Autodiff in this library uses Directed Acyclic Graph (DAG), the so called computational graphs.

# Computational Graph

Computational graphs are a type of graph that can be used to represent mathematical expressions. This is similar to descriptive language in the case of deep learning models, providing a functional description of the required computation.
In general, the computational graph is a directed graph that is used for expressing and evaluating mathematical expressions. 

These can be used for two different types of calculations:

    Forward computation
    Backward computation

The following sections define a few key terminologies in computational graphs.

    A variable is represented by a node in a graph. It could be a scalar, vector, matrix, tensor, or even another type of variable.
    A function argument and data dependency are both represented by an edge. These are similar to node pointers.
    A simple function of one or more variables is called an operation. There is a set of operations that are permitted. Functions that are more complex than these operations in this set can be represented by combining multiple operations.

<img src="https://www.bing.com/images/search?view=detailV2&ccid=MTcxRxUL&id=23DA77DA5BB9F4A36314A3A02D5C1B1E849561B2&thid=OIP.MTcxRxULLKDKyOsvf5KDQwHaGV&mediaurl=https%3A%2F%2Fdiscuss.pytorch.org%2Fuploads%2Fdefault%2Foriginal%2F3X%2F0%2F3%2F0357bad8bd423d8a12b5e528dc68dca3773c4b54.png&cdnurl=https%3A%2F%2Fth.bing.com%2Fth%2Fid%2FR.31373147150b2ca0cac8eb2f7f928343%3Frik%3DsmGVhB4bXC2gow%26pid%3DImgRaw%26r%3D0&exph=1079&expw=1262&q=Computational+Graph&form=IRPRST&ck=925B67BDB3285052C6E75BFE0153559F&selectedindex=0&itb=1&ajaxhist=0&ajaxserp=0&pivotparams=insightsToken%3Dccid_yfrrLq0t*cp_FC53CDD11BE8901C994F1F034A1FA16B*mid_FCAD301A1A97A438ECAA7B43AEEE78861C59B3B1*thid_OIP.yfrrLq0tn1VRz9FIzIq-EAAAAA&vt=0&sim=11&iss=VSI&simid=608045018969936471&ajaxhist=0&ajaxserp=0](https://discuss.pytorch.org/uploads/default/original/3X/0/3/0357bad8bd423d8a12b5e528dc68dca3773c4b54.png)https://discuss.pytorch.org/uploads/default/original/3X/0/3/0357bad8bd423d8a12b5e528dc68dca3773c4b54.png"    width="400" height="400" />

Fig. Computational graph [source: Pytorch]
