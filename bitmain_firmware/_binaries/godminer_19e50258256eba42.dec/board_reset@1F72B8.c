void __fastcall board_reset(cgpu_info *a1)
{
  mg_tls_handshake(a1);
  usleep((__useconds_t)&stru_186A0);
  board_reset_high();
}
