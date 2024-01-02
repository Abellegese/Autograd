
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

<img src="[https://th.bing.com/th/id/R.ed5e8b15a86be768e7df420458411681?rik=VqqbYRUSv5tOzg&riu=http%3a%2f%2fwww.cheminformania.com%2fwp-content%2fuploads%2f2017%2f12%2foutput_66_1.png&ehk=rEEFb6FVnqW8gaAadWW9kmBrhdxuzUm2axZ5lZIVlLA%3d&risl=&pid=ImgRaw&r=0](https://www.bing.com/images/search?view=detailV2&ccid=5KdDT9%2b5&id=6A62509E40FEF9C7F981A4945254D6BE75B5E6CC&thid=OIP.5KdDT9-50z9hHIfsEREcCAAAAA&mediaurl=https%3a%2f%2fpytorch.org%2fassets%2fimages%2faugmented_computational_graph.png&cdnurl=https%3a%2f%2fth.bing.com%2fth%2fid%2fR.e4a7434fdfb9d33f611c87ec11111c08%3frik%3dzOa1db7WVFKUpA%26pid%3dImgRaw%26r%3d0&exph=405&expw=474&q=Computational+Graph&simid=608026640835679532&FORM=IRPRST&ck=2850F6B9E64B77B7049729576ACBF5E1&selectedIndex=1&itb=1&ajaxhist=0&ajaxserp=0)https://www.bing.com/images/search?view=detailV2&ccid=5KdDT9%2b5&id=6A62509E40FEF9C7F981A4945254D6BE75B5E6CC&thid=OIP.5KdDT9-50z9hHIfsEREcCAAAAA&mediaurl=https%3a%2f%2fpytorch.org%2fassets%2fimages%2faugmented_computational_graph.png&cdnurl=https%3a%2f%2fth.bing.com%2fth%2fid%2fR.e4a7434fdfb9d33f611c87ec11111c08%3frik%3dzOa1db7WVFKUpA%26pid%3dImgRaw%26r%3d0&exph=405&expw=474&q=Computational+Graph&simid=608026640835679532&FORM=IRPRST&ck=2850F6B9E64B77B7049729576ACBF5E1&selectedIndex=1&itb=1&ajaxhist=0&ajaxserp=0"    width="400" height="400" />

Fig. Computational graph [source: Pytorch]
