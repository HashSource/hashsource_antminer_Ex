void *__fastcall read_status_from_monitor(void *a1, int a2)
{
  memcpy(a1, (char *)&unk_167410 + 208 * *(_DWORD *)(a2 + 144) + 320, 0xD0u);
  return a1;
}
