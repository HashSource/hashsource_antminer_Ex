int miner_6060info_errorcode_uninit()
{
  _DWORD *v0; // r0
  unsigned int *v1; // r3
  unsigned int v2; // r2
  unsigned int v3; // r2
  pthread_mutex_t *v4; // r0

  pthread_mutex_lock(&stru_195CC8);
  if ( byte_1960D8 )
  {
    byte_1960D8 = 0;
    usleep(0x3E8u);
    v0 = (_DWORD *)dword_1960DC;
    if ( dword_1960DC )
    {
      if ( *(_DWORD *)(dword_1960DC + 4) != -1 )
      {
        v1 = (unsigned int *)(dword_1960DC + 4);
        __dmb(0xBu);
        do
        {
          v2 = __ldrex(v1);
          v3 = v2 - 1;
        }
        while ( __strex(v3, v1) );
        if ( !v3 )
          json_delete(v0);
      }
    }
  }
  LOWORD(v4) = 23752;
  HIWORD(v4) = (unsigned int)&unk_196BB8 >> 16;
  return pthread_mutex_unlock(v4);
}
