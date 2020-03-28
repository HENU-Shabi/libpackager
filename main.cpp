#include "packager/packager.h"

int main() {
    shaka::Packager packager;

// Setup packaging parameters.
    shaka::PackagingParams packaging_params = shaka::PackagingParams();
// Use default parameters here.

// Setup stream descriptors.
    std::vector<shaka::StreamDescriptor> stream_descriptors;
    shaka::StreamDescriptor video_stream_descriptor;
    video_stream_descriptor.input = "input.mp4";
    video_stream_descriptor.stream_selector = "video";
    video_stream_descriptor.output = "output_video.mp4";
    stream_descriptors.push_back(video_stream_descriptor);
    shaka::StreamDescriptor audio_stream_descriptor;
    audio_stream_descriptor.input = "input.mp4";
    audio_stream_descriptor.stream_selector = "audio";
    audio_stream_descriptor.output = "output_audio.mp4";
    stream_descriptors.push_back(audio_stream_descriptor);


    shaka::Status status = packager.Initialize(packaging_params,
                                               stream_descriptors);
    status = packager.Run();
}
