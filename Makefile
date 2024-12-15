CC = gcc

APPS  = ambiguous alignmemt arrayindex cpu_speed
APPS += float_inf float_nan for_loop fra2bin memory_leak negative network_order
APPS += proc_maps ptr_array quine spin stdin system_bg
APPS += tcp_mass_data_client tcp_mass_data_server tick_msec time_stamp
APPS += wrong_atan2 wrong_constant wrong_equal wrong_mod wrong_mul wrong_mul.fast
APPS += wrong_shift wrong_signed
APPS += udp_mass_data_recv udp_mass_data_send

all: $(APPS)

ambiguous: ambiguous.c
	$(CC) $< -Wall -o $@

alignmemt: alignmemt.c
	$(CC) $< -Wall -o $@

arrayindex: arrayindex.c
	$(CC) $< -Wall -o $@

cpu_speed: cpu_speed.c
	$(CC) $< -Wall -o $@

float_inf: float_inf.c
	$(CC) $< -Wall -lm -o $@

float_nan: float_nan.c
	$(CC) $< -Wall -lm -o $@

for_loop: for_loop.c
	$(CC) $< -Wall -o $@

fra2bin: fra2bin.c
	$(CC) $< -Wall -o $@

memory_leak: memory_leak.c
	$(CC) $< -Wall -g -lpthread -o $@

negative: negative.c
	$(CC) $< -Wall -o $@

network_order: network_order.c
	$(CC) $< -Wall -o $@

proc_maps: proc_maps.c
	$(CC) $< -Wall -o $@

ptr_array: ptr_array.c
	$(CC) $< -Wall -o $@

quine: quine.c
	$(CC) $< -Wall -o $@

spin: spin.c
	$(CC) $< -Wall -o $@

stdin: stdin.c
	$(CC) $< -Wall -o $@

system_bg: system_bg.c
	$(CC) $< -Wall -o $@

tcp_mass_data_client: tcp_mass_data_client.c
	$(CC) $< -Wall -o $@

tcp_mass_data_server: tcp_mass_data_server.c
	$(CC) $< -Wall -o $@

tick_msec: tick_msec.c
	$(CC) $< -Wall -o $@

time_stamp: time_stamp.c
	$(CC) $< -Wall -o $@

wrong_atan2: wrong_atan2.c
	$(CC) $< -Wall -lm -o $@

wrong_constant: wrong_constant.c
	$(CC) $< -Wall -o $@

wrong_equal: wrong_equal.c
	$(CC) $< -Wall -o $@

wrong_mod: wrong_mod.c
	$(CC) $< -Wall -lm -o $@

wrong_mul: wrong_mul.c
	$(CC) $< -Wall -o $@

wrong_mul.fast: wrong_mul.c
	$(CC) $< -Wall -ffast-math -o $@

wrong_shift: wrong_shift.c
	$(CC) $< -Wall -o $@

wrong_signed: wrong_signed.c
	$(CC) $< -Wall -o $@

udp_mass_data_recv: udp_mass_data_recv.c
	$(CC) $< -Wall -o $@

udp_mass_data_send: udp_mass_data_send.c
	$(CC) $< -Wall -o $@

clean:
	@rm -f $(APPS)
