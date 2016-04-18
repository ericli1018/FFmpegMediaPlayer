/*
 * FFmpegMediaPlayer: A unified interface for playing audio files and streams.
 *
 * Copyright 2016 William Seemann
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <videoplayer.h>

void createVideoEngine(VideoPlayer **ps) {
	VideoPlayer *is = *ps;
    
	ps = &is;
}

void *createOverlay(VideoPlayer **ps, int width, int height) {
    VideoPlayer *player = *ps;

	return NULL;
}

void freeOverlay(VideoPlayer **ps, void *bmp) {

}

void lockOverlay(VideoPlayer **ps, AVPicture *pict, void *bmp) {

}

void unlockOverlay(VideoPlayer **ps, void *bmp) {

}

void displayOverlay(VideoPlayer **ps, void *bmp, int x, int y, int w, int h) {

}