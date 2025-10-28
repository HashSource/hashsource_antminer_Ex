char *__fastcall stratum_buffer_append(int a1, const char *a2)
{
  size_t v5; // [sp+8h] [bp-Ch]
  size_t v6; // [sp+Ch] [bp-8h]

  v6 = strlen(*(const char **)(a1 + 44));
  v5 = strlen(a2) + v6 + 1;
  if ( v5 >= *(_DWORD *)(a1 + 40) )
  {
    *(_DWORD *)(a1 + 40) = (v5 & 0xFFFFC000) + 0x4000;
    *(_DWORD *)(a1 + 44) = realloc(*(void **)(a1 + 44), *(_DWORD *)(a1 + 40));
  }
  return strcpy((char *)(*(_DWORD *)(a1 + 44) + v6), a2);
}
