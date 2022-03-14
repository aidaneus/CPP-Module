# include <sys/types.h>

template<typename T>
class Array
{
	
	public:
		Array(void)             : _array(NULL),          _size(0) {}
		Array(uint const &size) : _array(new T[size]()), _size(size) {}
		Array(Array const &ref) { *this = ref; }
		~Array(void)            { delete [] _array; }

		Array &		operator=(Array const &ref)
		{
			if (this == &ref)
				return *this;
			
			_array = new T[ref.size()];
			_size = ref.size();

			for (uint i = 0; i < _size; ++i)
				_array[i] = ref._array[i];
			return *this;
		}

		T &			operator[](int idx)
		{
			if (idx < 0 || static_cast<uint>(idx) >= _size)
				throw Array::OutOfBounds();
			return _array[idx];
		}

		const T &	operator[](int idx) const
		{
			if (idx < 0 || static_cast<uint>(idx) >= _size)
				throw Array::OutOfBounds();
			return _array[idx];
		}
		
		uint		size(void) const { return _size; };

		void		print(void) const
		{
			for (uint i = 0; i < _size; ++i)
				std::cout << "[" << i << "]: " << _array[i] << std::endl;
		}

	private:
		T			*_array;
		uint		_size;
	
	public:
		class OutOfBounds : public std::exception
		{
			public:
				char const *what(void) const throw() { return "Index Out of Bounds"; }
		};
	
};
