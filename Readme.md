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

3. Export the model, note the model can export in the follow format, See mor in the export script

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

Use command line 

```bash
    g++ -std=c++17 ./main.cpp -o main.out  -I {OPENCV_PATH}/include/opencv4/opencv2 -I {OPENCV_PATH}/include/opencv4 -L {OPENCV_PATH}/lib -l opencv_stitching -l opencv_superres -l opencv_videostab -l opencv_aruco -l opencv_bgsegm -l opencv_bioinspired -l opencv_ccalib -l opencv_dnn_objdetect -l opencv_dpm -l opencv_face -l opencv_fuzzy -l opencv_hfs -l opencv_img_hash -l opencv_line_descriptor -l opencv_optflow -l opencv_reg -l opencv_rgbd -l opencv_saliency -l opencv_stereo -l opencv_structured_light -l opencv_phase_unwrapping -l opencv_surface_matching -l opencv_tracking -l opencv_datasets -l opencv_dnn -l opencv_plot -l opencv_xfeatures2d -l opencv_shape -l opencv_video -l opencv_ml -l opencv_ximgproc -l opencv_xobjdetect -l opencv_objdetect -l opencv_calib3d -l opencv_features2d -l opencv_highgui -l opencv_videoio -l opencv_imgcodecs -l opencv_flann -l opencv_xphoto -l opencv_photo -l opencv_imgproc -l opencv_core -g 
```

