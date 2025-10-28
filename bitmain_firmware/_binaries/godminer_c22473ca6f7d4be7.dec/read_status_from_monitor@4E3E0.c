void *__fastcall read_status_from_monitor(void *a1, int a2)
{
  int v2; // r3

  LOWORD(v2) = 25592;
  HIWORD(v2) = (unsigned int)&g_miner_type[240] >> 16;
  memcpy(a1, (const void *)(v2 + 208 * *(_DWORD *)(a2 + 136) + 320), 0xD0u);
  return a1;
}
