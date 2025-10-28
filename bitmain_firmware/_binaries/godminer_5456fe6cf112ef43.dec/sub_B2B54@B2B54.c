int sub_B2B54()
{
  int (**v0)(void); // r5
  int v1; // r2
  int v2; // r0
  int v3; // r3
  int *v4; // r0
  int v5; // r3
  int *v6; // r4
  _DWORD v8[3]; // [sp+4h] [bp-Ch] BYREF

  while ( dword_16C528 )
  {
    if ( !pthread_mutex_lock(&stru_16C52C) )
    {
      v0 = (int (**)(void))new_iterator_c_map(dword_16C544);
      if ( (*v0)() )
      {
        do
        {
          v4 = (int *)v0[2]();
          v5 = v4[1];
          v6 = v4;
          if ( v5 )
          {
            v1 = *v4;
            v2 = v4[2];
          }
          else
          {
            gpio_write(***((_DWORD ***)v0[5] + 4), *((unsigned __int8 *)v4 + 8));
            v5 = *v6;
            v2 = v6[2] != 1;
            v1 = *v6;
            v6[2] = v2;
          }
          v3 = v5 - 200;
          v6[1] = v3;
          v8[0] = v1;
          v8[1] = v3;
          v8[2] = v2;
          ((void (__fastcall *)(int (**)(void), _DWORD *, int))v0[1])(v0, v8, 12);
          free(v6);
        }
        while ( ((int (__fastcall *)(int (**)(void)))*v0)(v0) );
      }
      delete_iterator_c_map(v0);
      pthread_mutex_unlock(&stru_16C52C);
    }
    usleep((__useconds_t)&loc_30D40);
  }
  return 0;
}
