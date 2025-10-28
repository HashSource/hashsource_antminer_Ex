int miner_6060info_errorcode_init()
{
  char *v0; // r0
  double *file; // r0
  char v3[256]; // [sp+4h] [bp-100h] BYREF

  pthread_mutex_lock(&stru_195CC8);
  if ( byte_1960D8 || access("/etc/errorcode.json", 0) )
  {
    pthread_mutex_unlock(&stru_195CC8);
    return 0;
  }
  else
  {
    LOWORD(v0) = 30132;
    HIWORD(v0) = (unsigned int)"failed!" >> 16;
    file = json_load_file(v0, 0, v3);
    dword_1960DC = (int)file;
    if ( file && !*(_DWORD *)file )
    {
      byte_1960D8 = 1;
      pthread_mutex_unlock(&stru_195CC8);
      return 1;
    }
    else
    {
      return sub_60CCC();
    }
  }
}
