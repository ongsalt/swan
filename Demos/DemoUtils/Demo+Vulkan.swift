#if os(Linux)
import RGFW
import WebGPU

@MainActor
func getSurface(window: OpaquePointer, instance: GPUInstance) -> GPUSurface {
	var surfaceDescriptor = GPUSurfaceDescriptor()
	surfaceDescriptor.nextInChain = GPUSurfaceSourceWaylandSurface(
		display: UnsafeMutableRawPointer(RGFW_getDisplay_Wayland()),
		surface: UnsafeMutableRawPointer(RGFW_window_getWindow_Wayland(window))
	)
	return instance.createSurface(descriptor: surfaceDescriptor)
}

@MainActor
func updateSurface(surface: GPUSurface, window: OpaquePointer, device: GPUDevice, format: GPUTextureFormat) {}

func adapterOptions() -> GPURequestAdapterOptions {
	return GPURequestAdapterOptions(backendType: .vulkan)
}

#endif
