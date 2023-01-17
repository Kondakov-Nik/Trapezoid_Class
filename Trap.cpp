// ����� �������� ������
// ����� ��������

#include "Trap.h"
#include <stdexcept>
#include <cmath>


/// ����������� ��� ����������
Trap::Trap() {
	ab_1 = 0;  bc_1 = 0;  cd_1 = 0; ad_1 = 0;
}

// ����������� � ����������� 
Trap::Trap(float ab, float bc, float cd, float ad) { // ab-������� �������, bc-������� ���������, cd-������� �������, ad-������ ���������
	ab_1 = ab; // ����� ������� ������� ab 
	bc_1 = bc; // ������� ��������� bc
	cd_1 = cd; // ����� ������� ������� cd
	ad_1 = ad; // ������ ��������� ad
}

/// ������ ��������
void Trap::set_trap(float ab, float bc, float cd, float ad) { // ab-������� �������, bc-������� ���������, cd-������� �������, ad-������ ���������
	set_ab(ab); // ����� ������� ������� ab 
	set_bc(bc); // ������� ��������� bc
	set_cd(cd); // ����� ������� ������� cd
	set_ad(ad); // ������ ��������� ad
}

/// ������ ab
void Trap::set_ab(float ab) {
	if (ab < 0) throw std::invalid_argument("Invalid argument: ab");
	ab_1 = ab;
}

/// ������ ab
void Trap::set_bc(float bc) {
	if (bc < 0) throw std::invalid_argument("Invalid argument: bc");
	bc_1 = bc;
}

/// ������  cd
void Trap::set_cd(float cd) {
	if (cd < 0) throw std::invalid_argument("Invalid argument: cd");
	cd_1 = cd;
}

/// ������ ad
void Trap::set_ad(float ad) {
	if (ad < 0) throw std::invalid_argument("Invalid argument: ad");
	ad_1 = ad;
}

/// �������� ������� ab
float Trap::get_ab() const { return ab_1; }

/// �������� ������� bc
float Trap::get_bc() const { return bc_1; }

/// �������� ������� cd
float Trap::get_cd() const { return cd_1; }

/// �������� ������� ad
float Trap::get_ad() const { return ad_1; }


/// �������� �������
float Trap::square() {
	return 0.5 * (bc_1 + ad_1) * sqrt(ab_1 * ab_1 - pow(((bc_1 - ad_1) / 2), 2));
}

/// �������� ��������
float Trap::perimeter() {
	return ab_1 + bc_1 + cd_1 + ad_1;
}