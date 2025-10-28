void *__fastcall read_status_from_monitor(void *a1, int a2)
{
  memcpy(a1, (char *)&unk_1660E8 + 216 * *(_DWORD *)(a2 + 208) + 1280, 0xD8u);
  return a1;
}
