#pragma once
class CRectangle
{

private:
    int left;// -����� �������;
    int right;// � ������ �������;
    int top;// � ������� �������;
    int bottom;// - ������ �������
public:
    CRectangle();// -����������� �� ���������;
    CRectangle(int l, int t, int r, int b);// -����������� � �����������(����, ����, �����, ���);
    int Width();// -������ ��������������;
    int Height();// -������ ��������������;
    bool IsRectNull();// -����� ���������� ������, ���� ��� ��������� = 0;
    bool PtInRect(int x, int y);// -����� ���������� ������, ���� ����� ����� ������ ��������������;
    void SetRect(int x1, int y1, int x2, int y2);// -��������� ������� � ���������;
    void SetRectEmpty();// -��������� ���� ��������� �������������� � 0;
    void InflateRect(int l, int t, int r, int b);// -����� ����������� ������ ��������������, ������ ������� ������������ ����������� �����;
    void DeflateRect(int l, int t, int r, int b); //-����� ��������� ������ ��������������, //������ ������� ������������ ����������� �����;
    void NormalizeRect();// -����� ����������� ���������� ��������������, //�.�.���� ����� ������� ����� ���������� ������, ��� ������, �� ��� �������� �������, �� �� ����� ��������� � ������� � ������ �������� ��������������;
    void OffsetRect(int x, int y);// -����� ������� ������������� �� �������� ��������;
    void Print();// -����� ������� �� ����� �������������

};

