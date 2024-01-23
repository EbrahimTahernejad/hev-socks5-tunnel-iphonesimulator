/*
 ============================================================================
 Name        : hev-main.c
 Author      : hev <r@hev.cc>
 Copyright   : Copyright (c) 2019 - 2023 hev
 Description : Main
 ============================================================================
 */

#include <stdio.h>

int
hev_socks5_tunnel_main (const char *config_path, int tun_fd)
{
    return -2;
}

void
hev_socks5_tunnel_quit (void)
{
    return;
}

void hev_socks5_tunnel_stats (size_t *tx_packets, size_t *tx_bytes,
                              size_t *rx_packets, size_t *rx_bytes)
{
    return;
}
