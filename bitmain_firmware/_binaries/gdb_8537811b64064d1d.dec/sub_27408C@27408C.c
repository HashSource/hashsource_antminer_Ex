enum XML_Error __fastcall sub_27408C(int a1, int a2)
{
  enum XML_Error result; // r0
  const char *v4; // r0
  __int64 v5; // r0

  *(_DWORD *)(a1 + 40) = a2;
  XML_SetParamEntityParsing(*(XML_Parser *)a1, XML_PARAM_ENTITY_PARSING_UNLESS_STANDALONE);
  XML_SetExternalEntityRefHandler(*(XML_Parser *)a1, (XML_ExternalEntityRefHandler)sub_2743AC);
  result = XML_UseForeignDTD(*(XML_Parser *)a1, 1u);
  if ( result )
  {
    v4 = XML_ErrorString(result);
    v5 = sub_94728((int)"xml-support.c", 594, "XML_UseForeignDTD failed: %s", v4);
    return sub_2740E8(v5, HIDWORD(v5));
  }
  return result;
}
