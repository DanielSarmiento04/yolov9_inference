<h1 align="center">Yolov9 Inference</h1>


<h3 align="center"> Jose Sarmiento | josedanielsarmiento219@gmail.com</h3>


## Resumen


The next repository aims to provide a basic c++ script using std 17 over, to do it and consider the speed The code use OpenCv backend (version 4.8.1), to do it the `pytorch  model might convert to an dnn supported by Opencv`, the framework select is Onnx [Slim]


## Steps


1. Download de model you want 

    - gelan-c
    - gelan-e
    - yolov9-c
    - yolov9-e


```bash
    python download_model.py  --model {MODEL_SELECTED}
```

2. Download de yolov9 repository to convert the Scripts

```bash
    git clone https://github.com/WongKinYiu/yolov9
```

- It recommended to create a virtual environment to do it, Use miniforge | anaconda | miniconda

```
    conda create --name yolov9 python=3.11 -y
    conda activate yolov9
    pip install -r ./yolov9/requirements.txt
```

3. Export the model, note the model can export in the follow format, See more in the [export script](https://github.com/WongKinYiu/yolov9/blob/main/export.py)

    - PyTorch
    - TorchScript
    - ONNX
    - OpenVINO
    - TensorRT
    - CoreML
    - TensorFlow SavedModel
    - TensorFlow GraphDef
    - TensorFlow Lite
    - TensorFlow Edge TPU
    - TensorFlow.js
    - PaddlePaddle

```
    pip install onnx
```

```bash
    pip install onnxruntime
```

If you have Gpu, download the backend supported that

```bash
    pip install onnxruntime-gpu
```

Export, depending of your hardware, configure your device (gpu or cpu), view the oficial [export file](https://github.com/WongKinYiu/yolov9/blob/main/export.py)


```bash
    python export.py --weights ../yolov9-c.pt --include onnx 
```


4. Compile

Use Cmake file

```bash
    mkdir build and cd build
```

```bash
    cmake .. && make
```

5. Execute
```bash
    ./yolov9_inference <Source> <Model path>
```

5.1 Example 

```bash
./yolov9_inference 1 ../yolov9-c.onnx  
```

