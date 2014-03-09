#ifndef _AUDIO_H_
#define _AUDIO_H_

#include <SDL.h>
#include "core/api/NstApiEmulator.hpp"
#include "core/api/NstApiSound.hpp"

using namespace Nes::Api;

void audio_init();
void audio_deinit();
void audio_update();
void audio_pause();
void audio_unpause();
void audio_play(Sound::Output *soundoutput);
void audio_set_params(Sound::Output *soundoutput);
void audio_sdl_callback(void *userdata, Uint8 *stream, int len);
void audio_set_samples(uint32_t samples_per_frame);
void audio_fill_buffer(int bufnum);
void audio_output_frame(unsigned long numsamples, int16_t *out);

void timing_check();
void timing_set_default();
void timing_set_altspeed();

#endif
