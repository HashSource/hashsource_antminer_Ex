unsigned int power_off()
{
  int v0; // r3

  bitmain_power_off();
  LOWORD(v0) = 25404;
  HIWORD(v0) = (unsigned int)&g_miner_type[52] >> 16;
  *(_BYTE *)(v0 + 0x18) = 0;
  return sleep(1u);
}
