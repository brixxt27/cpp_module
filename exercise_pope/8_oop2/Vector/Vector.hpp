#pragma once
#ifndef __VECTOR_HPP__
#define __VECTOR_HPP__

namespace samples {
	class Vector {
	public:
		Vector();
		Vector(int x, int y);

		int		GetX() const;
		void	SetX(int x);

		int		GetY() const;
		void	SetY(int y);

		bool	IsEqual(const Vector& v) const;
		Vector	Multiply(const Vector& v) const;
		Vector	Multiply(int multiplier) const;

		void	Scale(const Vector& v);
		void	Scale(int multiplier);

		Vector	operator+(const Vector& v) const;

	private:
		int	mX;
		int	mY;
	};
}

#endif
