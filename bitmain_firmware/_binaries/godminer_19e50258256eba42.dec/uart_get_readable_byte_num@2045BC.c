int __fastcall uart_get_readable_byte_num(int a1)
{
  int v3; // [sp+Ch] [bp-8h]

  pthread_mutex_lock(&stru_C25D1C[a1]);
  v3 = sub_2024B0(a1);
  pthread_mutex_unlock(&stru_C25D1C[a1]);
  return v3;
}
