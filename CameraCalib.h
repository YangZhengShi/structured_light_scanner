#ifndef  __CAMERACALIB_H
#define  __CAMERACALIB_H

#include <iostream>
#include <opencv2/opencv.hpp>

//��ȡ�ļ��б�
bool readStringList( const std::string& filename, std::vector<std::string>& l);
//����궨
void StereoCalibration(const std::string &imagelistfn, const std::string &storintrinsicsyml, 
		       const std::string &storextrinsicsyml);
//ͼƬ΢��
void ImgRectified(const std::string& intrinsic_filename, const std::string& extrinsic_filename, 
		  const std::string& imageListfn, const std::string& RectimageListfn);
#endif