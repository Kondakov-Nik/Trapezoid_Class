// ����� �������� ������
// ����� ��������

#include <string>
#pragma once // ������ �� �������� ����������� ������������� ����� 

// ����� ��������
class Trap {

	//�������� ������
private:
	float ab_1;   // ����� ������� ������� ab 
	float bc_1;	// ������� ��������� bc
	float cd_1;   // ����� ������� ������� cd
	float ad_1;   // ������ ��������� ad

	//������ ������

public:

	// ����������� 

	Trap();

	Trap(float ab, float bc, float cd, float ad); // ab-������� �������, bc-������� ���������, cd-������� �������, ad-������ ���������

	// ������ �������� ....
	void set_trap(float ab, float bc, float cd, float ad); // ab-������� �������, bc-������� ���������, cd-������� �������, ad-������ ���������

	// ������ ������� ������� ab
	void set_ab(float ab);

	// ������ ������� ��������� bc
	void set_bc(float bc);

	// ������ ������ ������� cd
	void set_cd(float cd);

	// ������ ������ ��������� ad
	void set_ad(float ad);

	// �������� ������� ab
	float get_ab() const;

	// �������� ������� bc
	float get_bc() const;

	// �������� ������� cd
	float get_cd() const;

	// �������� ������� ad
	float get_ad() const;

	// �������� �������
	float square();

	// �������� ��������
	float perimeter();
};