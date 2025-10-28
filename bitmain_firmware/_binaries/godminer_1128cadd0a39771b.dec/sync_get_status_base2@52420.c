int __fastcall sync_get_status_base2(pthread_mutex_t *a1, int a2, int a3, _DWORD *a4, int a5, int a6)
{
  if ( a1[6].__size[8] )
    return sub_51B1C(a1, a2, a3, a4, a5, a6);
  else
    return 4;
}
