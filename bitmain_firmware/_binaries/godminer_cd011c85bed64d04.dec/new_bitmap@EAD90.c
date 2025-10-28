_DWORD *__fastcall new_bitmap(unsigned int a1)
{
  _DWORD *v2; // r4

  v2 = calloc(1u, 0x24u);
  if ( !v2 )
    puts("bitmap calloc failed!");
  v2[3] = visited_init;
  v2[8] = visited_exit;
  v2[7] = visited_clear;
  v2[5] = visited_set;
  v2[6] = visited_test;
  v2[4] = visited_reset;
  visited_init(v2, a1);
  ((void (__fastcall *)(_DWORD *))v2[7])(v2);
  return v2;
}
