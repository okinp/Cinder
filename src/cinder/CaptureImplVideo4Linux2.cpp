#include "cinder/CaptureImplVideo4Linux2.h"

namespace cinder {
	CaptureImplVideo4Linux2::CaptureImplVideo4Linux2( int32_t width, int32_t height, const Capture::DeviceRef device )
	{
		
	}
	CaptureImplVideo4Linux2::CaptureImplVideo4Linux2( int32_t width, int32_t height )
	{

	}
	CaptureImplVideo4Linux2::~CaptureImplVideo4Linux2()
	{

	}
	void CaptureImplVideo4Linux2::start()
	{

	}
	void CaptureImplVideo4Linux2::stop()
	{

	}
	boool CaptureImplVideo4Linux2::isCapturing()
	{

	}
	bool CaptureImplVideo4Linux2::checkNewFrame() const 
	{


	}

	// Surface8u	getSurface() const;

	// static const std::vector<Capture::DeviceRef>&	getDevices( bool forceRefresh = false );


	// 	class Device : public Capture::Device {
	// 	public:
	// 		bool						checkAvailable() const;
	// 		bool						isConnected() const;
	// 		Capture::DeviceIdentifier	getUniqueId() const { return mUniqueId; }

	// 		Device( const std::string &name, int uniqueId ) : Capture::Device(), mUniqueId( uniqueId ) { mName = name; }
	//  	protected:
	// 		int				mUniqueId;
	// 	};
	// protected:
	// 	void	init( int32_t width, int32_t height, const Capture::Device &device );
}