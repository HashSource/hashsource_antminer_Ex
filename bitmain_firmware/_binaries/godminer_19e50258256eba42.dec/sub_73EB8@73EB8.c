int __fastcall sub_73EB8(int a1, int a2)
{
  char *s2; // [sp+Ch] [bp-10h]
  int v7; // [sp+14h] [bp-8h]

  if ( !*(_DWORD *)(a1 + 1132) )
    *(_DWORD *)(a1 + 1132) = calloc(1u, 0x68u);
  if ( *(_DWORD *)(a1 + 1132) )
  {
    if ( *(_DWORD *)(a2 + 1588) )
    {
      s2 = *(char **)(a2 + 1588);
      if ( !strncasecmp(*(const char **)(a1 + 1132), s2, 0x20u)
        && !strncasecmp((const char *)(a1 + 8), (const char *)(a2 + 464), 0x20u) )
      {
        v7 = 0;
      }
      else
      {
        v7 = 2;
      }
      set_cur_seed_rvn(s2);
      set_cur_block_num_rvn(*((_QWORD *)s2 + 12));
      return v7;
    }
    else
    {
      printf("invalid pointer(%s)!\n", "pool->work.private");
      return 0;
    }
  }
  else
  {
    printf("invalid pointer(%s)!\n", "work->private");
    return 0;
  }
}
