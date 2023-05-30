/*
 * Copyright 2023 Dakkshesh <dakkshesh5@gmail.com>.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

/* Declarations */

void servo_attach(void);

bool is_stand(void);
void stand(void);
void sit(void);
void step_forward(unsigned int step);
void step_back(unsigned int step);
void turn_left(unsigned int step);
void turn_right(unsigned int step);
void hand_shake(int i);
void hand_wave(int i);
void do_test(void);

void wait_all_reach(void);
void set_site(int leg, float x, float y, float z);

void cartesian_to_polar(volatile float &alpha, volatile float &beta,
                        volatile float &gamma, volatile float x,
                        volatile float y, volatile float z);
void polar_to_servo(int leg, float alpha, float beta, float gamma);

void servo_service(void);