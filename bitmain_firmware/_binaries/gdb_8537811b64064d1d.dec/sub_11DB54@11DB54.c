void __fastcall sub_11DB54(_BYTE *a1, int a2)
{
  void *v2; // r4

  if ( *a1 == 47 || !a2 )
    JUMPOUT(0xE5DB4);
  v2 = (void *)sub_31E2A4(a2, &word_39899C, a1);
  ((void (*)(void))loc_E5DB4)();
  free(v2);
}
