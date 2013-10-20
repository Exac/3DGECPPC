//http://docs.oracle.com/javase/7/docs/api/java/nio/FloatBuffer.html
class FloatBuffer{
private:
public:
	FloatBuffer allocate(int capacity);
	float array();
	int arrayOffSet();
	FloatBuffer asReadOnlyBuffer();
	FloatBuffer compact();
	int compareTo(FloatBuffer that);
	FloatBuffer duplicate();
	bool equals(FloatBuffer ob);
	float get();
	FloatBuffer get(float dst);
	FloatBuffer get(float dst, int offset, int length);
	float get(int index);
	bool hasArray();
	int hashCode();
	bool isDirect();
	//ByteOrder order();
	FloatBuffer put(float f);
	FloatBuffer put(float src[]);
	FloatBuffer();
};