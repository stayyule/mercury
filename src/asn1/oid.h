std::unordered_map<std::string, std::string> oid_dict = {
	{ {0x04,0xff,0x8f,0x7a,0x01,0x05}, "ETSI_EV_CPS" },
	{ {0x09,0x92,0x26,0x89,0x93,0xf2,0x2c,0x64,0x01,0x01}, "uid" },
	{ {0x09,0x92,0x26,0x89,0x93,0xf2,0x2c,0x64,0x01,0x01}, "userid" },
	{ {0x09,0x92,0x26,0x89,0x93,0xf2,0x2c,0x64,0x01,0x19}, "dc" },
	{ {0x09,0x92,0x26,0x89,0x93,0xf2,0x2c,0x64,0x01,0x19}, "domainComponent" },
	{ {0x2a,0x28,0x28,0x11,0x01,0x16}, "A-Trust_EV_CPS" },
	{ {0x2a,0x81,0x1c,0x86,0xef,0x3a,0x01,0x01,0x03}, "SHECA_EV_CPS" },
	{ {0x2a,0x83,0x08,0x8c,0x9b,0x1b,0x64,0x85,0x51,0x01}, "SECOM_Trust_Systems_EV_CPS" },
	{ {0x2a,0x86,0x48,0xce,0x38,0x04,0x01}, "id-dsa" },
	{ {0x2a,0x86,0x48,0xce,0x38,0x04,0x03}, "id-dsa-with-sha1" },
	{ {0x2a,0x86,0x48,0xce,0x3d}, "ansi-X9-62" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x01}, "id-fieldType" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x01,0x01}, "prime-field" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x01,0x02}, "characteristic-two-field" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x01,0x02,0x03}, "id-characteristic-two-basis" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x01,0x02,0x03,0x01}, "gnBasis" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x01,0x02,0x03,0x02}, "tpBasis" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x01,0x02,0x03,0x03}, "ppBasis" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x02}, "id-publicKeyType" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x02,0x01}, "id-ecPublicKey" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x03}, "ellipticCurve" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x03,0x03}, "c-TwoCurve" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x03,0x03,0x01}, "c2pnb163v1" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x03,0x03,0x02}, "c2pnb163v2" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x03,0x03,0x03}, "c2pnb163v3" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x03,0x03,0x04}, "c2pnb176w1" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x03,0x03,0x05}, "c2tnb191v1" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x03,0x03,0x06}, "c2tnb191v2" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x03,0x03,0x07}, "c2tnb191v3" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x03,0x03,0x08}, "c2onb191v4" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x03,0x03,0x09}, "c2onb191v5" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x03,0x03,0x0a}, "c2pnb208w1" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x03,0x03,0x0b}, "c2tnb239v1" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x03,0x03,0x0c}, "c2tnb239v2" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x03,0x03,0x0d}, "c2tnb239v3" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x03,0x03,0x0e}, "c2onb239v4" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x03,0x03,0x0f}, "c2onb239v5" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x03,0x03,0x10}, "c2pnb272w1" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x03,0x03,0x11}, "c2pnb304w1" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x03,0x03,0x12}, "c2tnb359v1" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x03,0x03,0x13}, "c2pnb368w1" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x03,0x03,0x14}, "c2tnb431r1" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x03,0x01}, "primeCurve" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x03,0x01,0x01}, "prime192v1" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x03,0x01,0x01}, "secp192r1" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x03,0x01,0x02}, "prime192v2" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x03,0x01,0x03}, "prime192v3" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x03,0x01,0x04}, "prime239v1" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x03,0x01,0x05}, "prime239v2" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x03,0x01,0x06}, "prime239v3" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x03,0x01,0x07}, "prime256v1" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x03,0x01,0x07}, "secp256r1" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x04}, "id-ecSigType" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x04,0x01}, "ecdsa-with-SHA1" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x04,0x03,0x01}, "ecdsa-with-SHA224" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x04,0x03,0x02}, "ecdsa-with-SHA256" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x04,0x03,0x03}, "ecdsa-with-SHA384" },
	{ {0x2a,0x86,0x48,0xce,0x3d,0x04,0x03,0x04}, "ecdsa-with-SHA512" },
	{ {0x2a,0x86,0x48,0xce,0x3e,0x02,0x01}, "dhpublicnumber" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x01}, "pkcs-1" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x01,0x01}, "rsaEncryption" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x01,0x02}, "md2WithRSAEncryption" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x01,0x04}, "md5WithRSAEncryption" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x01,0x05}, "sha1WithRSAEncryption" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x01,0x0b}, "sha256WithRSAEncryption" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x01,0x0c}, "sha384WithRSAEncryption" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x01,0x0d}, "sha512WithRSAEncryption" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x01,0x0e}, "sha224WithRSAEncryption" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x09}, "pkcs-9" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x09,0x09}, "pkcs-9-mo" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x09,0x01}, "id-emailAddress" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x09,0x01}, "pkcs-9-at-emailAddress" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x09,0x01}, "emailAddress" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x09,0x02}, "pkcs-9-at-unstructuredName" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x09,0x03}, "pkcs-9-at-contentType" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x09,0x04}, "pkcs-9-at-messageDigest" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x09,0x05}, "pkcs-9-at-signingTime" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x09,0x06}, "pkcs-9-at-counterSignature" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x09,0x07}, "pkcs-9-at-challengePassword" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x09,0x08}, "pkcs-9-at-unstructuredAddress" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x09,0x09}, "pkcs-9-at-extendedCertificateAttributes" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x09,0x0d}, "pkcs-9-at-signingDescription" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x09,0x0e}, "pkcs-9-at-extensionRequest" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x09,0x0e}, "id-ExtensionReq" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x09,0x0f}, "pkcs-9-at-smimeCapabilities" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x09,0x10}, "smime" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x09,0x10,0x02}, "id-aa" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x09,0x10,0x02,0x22}, "id-aa-cmc-unsignedData" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x09,0x14}, "pkcs-9-at-friendlyName" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x09,0x15}, "pkcs-9-at-localKeyId" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x09,0x16}, "certTypes" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x09,0x17}, "crlTypes" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x09,0x18}, "pkcs-9-oc" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x09,0x18,0x01}, "pkcs-9-oc-pkcsEntity" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x09,0x18,0x02}, "pkcs-9-oc-naturalPerson" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x09,0x19}, "pkcs-9-at" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x09,0x19,0x01}, "pkcs-9-at-pkcs15Token" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x09,0x19,0x02}, "pkcs-9-at-encryptedPrivateKeyInfo" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x09,0x19,0x03}, "pkcs-9-at-randomNonce" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x09,0x19,0x04}, "pkcs-9-at-sequenceNumber" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x09,0x19,0x05}, "pkcs-9-at-pkcs7PDU" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x09,0x1a}, "pkcs-9-sx" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x09,0x1a,0x01}, "pkcs-9-sx-pkcs9String" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x09,0x1a,0x02}, "pkcs-9-sx-signingTime" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x09,0x1b}, "pkcs-9-mr" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x09,0x1b,0x01}, "pkcs-9-mr-caseIgnoreMatch" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x01,0x09,0x1b,0x02}, "pkcs-9-mr-signingTimeMatch" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x02,0x02}, "id-md2" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x02,0x02}, "md2" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x02,0x05}, "md5" },
	{ {0x2a,0x86,0x48,0x86,0xf7,0x0d,0x05}, "id-md5" },
	{ {0x2b,0x06,0x01,0x04,0x01,0x82,0x37,0x14,0x02}, "szOID_ENROLL_CERTTYPE_EXTENSION" },
	{ {0x2b,0x06,0x01,0x04,0x01,0x82,0x37,0x15,0x01}, "szOID_CERTSRV_CA_VERSION" },
	{ {0x2b,0x06,0x01,0x04,0x01,0x82,0x37,0x15,0x02}, "szOID_CERTSRV_PREVIOUS_CERT_HASH" },
	{ {0x2b,0x06,0x01,0x04,0x01,0x82,0x37,0x15,0x07}, "szOID_CERTIFICATE_TEMPLATE" },
	{ {0x2b,0x06,0x01,0x04,0x01,0x82,0x37,0x15,0x0a}, "szOID_APPLICATION_CERT_POLICIES" },
	{ {0x2b,0x06,0x01,0x04,0x01,0x82,0x37,0x3c,0x02,0x01,0x01}, "jurisdictionOfIncorporationLocalityName" },
	{ {0x2b,0x06,0x01,0x04,0x01,0x82,0x37,0x3c,0x02,0x01,0x02}, "jurisdictionOfIncorporationStateOrProvinceName" },
	{ {0x2b,0x06,0x01,0x04,0x01,0x82,0x37,0x3c,0x02,0x01,0x03}, "jurisdictionOfIncorporationCountryName" },
	{ {0x2b,0x06,0x01,0x04,0x01,0x82,0x37,0x54,0x01,0x01}, "driveEncryption" },
	{ {0x2b,0x06,0x01,0x04,0x01,0x86,0x0e,0x01,0x02,0x01,0x08,0x01}, "Network_Solutions__EV_CPS" },
	{ {0x2b,0x06,0x01,0x04,0x01,0xa0,0x32,0x01,0x01}, "GlobalSign_EV_CPS" },
	{ {0x2b,0x06,0x01,0x04,0x01,0xa5,0x34,0x02,0x81,0x4a,0x01}, "D-TRUST_EV_CPS" },
	{ {0x2b,0x06,0x01,0x04,0x01,0xb1,0x3e,0x01,0x64,0x01}, "Verizon_Business_EV_CPS" },
	{ {0x2b,0x06,0x01,0x04,0x01,0xb2,0x31,0x01,0x02,0x01,0x05,0x01}, "Comodo_Group_EV_CPS" },
	{ {0x2b,0x06,0x01,0x04,0x01,0xbd,0x47,0x0d,0x18,0x01}, "T-Systems_EV_CPS" },
	{ {0x2b,0x06,0x01,0x04,0x01,0xbe,0x58,0x3e,0x02,0x64,0x01,0x02}, "QuoVadis_EV_CPS" },
	{ {0x2b,0x06,0x01,0x04,0x01,0xd6,0x79,0x02,0x04,0x02}, "id-ce-SignedCertificateTimestampList" },
	{ {0x2b,0x06,0x01,0x04,0x01,0xd6,0x79,0x02,0x04,0x05}, "id-ad-ocsp-SignedCertificateTimestampList" },
	{ {0x2b,0x06,0x01,0x04,0x01,0xe6,0x79,0x0a,0x01,0x03,0x0a}, "Firmaprofesional_EV_CPS" },
	{ {0x2b,0x06,0x01,0x04,0x01,0xf0,0x22,0x01,0x06}, "GeoTrust_EV_CPS" },
	{ {0x2b,0x06,0x01,0x04,0x01,0xf3,0x39,0x06,0x01,0x01}, "Izenpe_EV_CPS" },
	{ {0x2b,0x06,0x01,0x04,0x01,0x81,0x87,0x2e,0x0a,0x08,0x0c,0x01,0x02}, "Camerfirma_EV_CPS" },
	{ {0x2b,0x06,0x01,0x04,0x01,0x81,0xad,0x5a,0x02,0x05,0x02,0x03,0x01}, "OpenTrust_DocuSign_France_EV_CPS" },
	{ {0x2b,0x06,0x01,0x04,0x01,0x81,0xb5,0x37,0x01,0x01,0x01}, "StartCom_Certification_Authority_EV_CPS" },
	{ {0x2b,0x06,0x01,0x04,0x01,0x82,0x8f,0x09,0x02,0x04}, "AffirmTrust_EV_CPS" },
	{ {0x2b,0x06,0x01,0x04,0x01,0x82,0x9b,0x51,0x02}, "WoSign_EV_CPS" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07}, "id-pkix" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x01}, "id-pe" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x01,0x01}, "id-pe-authorityInfoAccess" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x01,0x02}, "id-pe-biometricInfo" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x01,0x03}, "id-pe-qcStatements" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x01,0x0b}, "id-pe-subjectInfoAccess" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x02}, "id-qt" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x02,0x01}, "id-qt-cps" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x02,0x02}, "id-qt-unotice" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x03}, "id-kp" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x03,0x01}, "id-kp-serverAuth" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x03,0x02}, "id-kp-clientAuth" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x03,0x03}, "id-kp-codeSigning" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x03,0x04}, "id-kp-emailProtection" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x03,0x08}, "id-kp-timeStamping" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x03,0x09}, "id-kp-OCSPSigning" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x03,0x1b}, "id-kp-cmcCA" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x03,0x1c}, "id-kp-cmcArchive" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x03,0x1c}, "id-kp-cmcRA" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x06,0x02}, "id-alg-noSignature" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x07}, "id-cmc" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x07,0x01}, "id-cmc-statusInfo" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x07,0x02}, "id-cmc-identification" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x07,0x03}, "id-cmc-identityProof" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x07,0x04}, "id-cmc-dataReturn" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x07,0x05}, "id-cmc-transactionId" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x07,0x06}, "id-cmc-senderNonce" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x07,0x07}, "id-cmc-recipientNonce" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x07,0x08}, "id-cmc-addExtensions" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x07,0x09}, "id-cmc-encryptedPOP" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x07,0x0a}, "id-cmc-decryptedPOP" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x07,0x0b}, "id-cmc-lraPOPWitness" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x07,0x0f}, "id-cmc-getCert" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x07,0x10}, "id-cmc-getCRL" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x07,0x11}, "id-cmc-revokeRequest" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x07,0x12}, "id-cmc-regInfo" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x07,0x13}, "id-cmc-responseInfo" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x07,0x15}, "id-cmc-queryPending" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x07,0x16}, "id-cmc-popLinkRandom" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x07,0x17}, "id-cmc-popLinkWitness" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x07,0x18}, "id-cmc-confirmCertAcceptance" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x07,0x19}, "id-cmc-statusInfoV2" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x07,0x1a}, "id-cmc-trustedAnchors" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x07,0x1b}, "id-cmc-authData" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x07,0x1c}, "id-cmc-batchRequests" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x07,0x1d}, "id-cmc-batchResponses" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x07,0x1e}, "id-cmc-publishCert" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x07,0x1f}, "id-cmc-modCertTemplate" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x07,0x20}, "id-cmc-controlProcessed" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x07,0x21}, "id-cmc-popLinkWitnessV2" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x07,0x22}, "id-cmc-identityProofV2" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x07,0x23}, "id-cmc-raIdentityWitness" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x07,0x24}, "id-cmc-changeSubjectName" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x07,0x25}, "id-cmc-responseBody" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x08}, "id-on" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x08,0x09}, "id-on-SmtpUTF8Mailbox" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x09}, "id-pda" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x09}, "ietf-at" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x09,0x01}, "id-pda-dateOfBirth" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x09,0x01}, "pkcs-9-at-dateOfBirth" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x09,0x02}, "id-pda-placeOfBirth" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x09,0x02}, "pkcs-9-at-placeOfBirth" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x09,0x03}, "pkcs-9-at-gender" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x09,0x03}, "id-pda-gender" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x09,0x04}, "pkcs-9-at-countryOfCitizenship" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x09,0x04}, "id-pda-countryOfCitizenship" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x09,0x05}, "id-pda-countryOfResidence" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x09,0x05}, "pkcs-9-at-countryOfResidence" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x0b}, "id-qcs" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x0b,0x01}, "id-qcs-pkixQCSyntax-v1" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x0b,0x02}, "id-qcs-pkixQCSyntax-v2" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x0c}, "id-cct" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x0c,0x02}, "id-cct-PKIData" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x0c,0x03}, "id-cct-PKIResponse" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x30}, "id-ad" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x30,0x01}, "id-pkix-ocsp" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x30,0x01}, "id-ad-ocsp" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x30,0x01,0x01}, "id-pkix-ocsp-basic" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x30,0x01,0x02}, "id-pkix-ocsp-nonce" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x30,0x01,0x03}, "id-pkix-ocsp-crl" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x30,0x01,0x04}, "id-pkix-ocsp-response" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x30,0x01,0x05}, "id-pkix-ocsp-nocheck" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x30,0x01,0x06}, "id-pkix-ocsp-archive-cutoff" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x30,0x01,0x07}, "id-pkix-ocsp-service-locator" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x30,0x01,0x08}, "id-pkix-ocsp-pref-sig-algs" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x30,0x01,0x09}, "id-pkix-ocsp-extended-revoke" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x30,0x02}, "id-ad-caIssuers" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x30,0x03}, "id-ad-timeStamping" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x30,0x05}, "id-ad-caRepository" },
	{ {0x2b,0x06,0x01,0x05,0x05,0x07,0x30,0x0c}, "id-ad-cmc" },
	{ {0x2b,0x0e,0x03,0x02,0x1a}, "id-sha1" },
	{ {0x2b,0x0e,0x03,0x02,0x1d}, "sha-1WithRSAEncryption" },
    { {0x2b,0x81,0x04,0x00,0x22}, "secp384r1" },
	{ {0x2b,0x81,0x04,0x01,0x01}, "sect163k1" },
	{ {0x2b,0x81,0x04,0x01,0x0f}, "sect163r2" },
	{ {0x2b,0x81,0x04,0x01,0x10}, "sect283k1" },
	{ {0x2b,0x81,0x04,0x01,0x11}, "sect283r1" },
	{ {0x2b,0x81,0x04,0x01,0x1a}, "sect233k1" },
	{ {0x2b,0x81,0x04,0x01,0x1b}, "sect233r1" },
	{ {0x2b,0x81,0x04,0x01,0x21}, "secp224r1" },
	{ {0x2b,0x81,0x04,0x01,0x22}, "secp384r1" },
	{ {0x2b,0x81,0x04,0x01,0x23}, "secp521r1" },
	{ {0x2b,0x81,0x04,0x01,0x24}, "sect409k1" },
	{ {0x2b,0x81,0x04,0x01,0x25}, "sect409r1" },
	{ {0x2b,0x81,0x04,0x01,0x26}, "sect571k1" },
	{ {0x2b,0x81,0x04,0x01,0x27}, "sect571r1" },
	{ {0x2b,0x81,0x04,0x01,0x0c}, "id-ecDH" },
	{ {0x2b,0x81,0x04,0x01,0x0d}, "id-ecMQV" },
	{ {0x2b,0x81,0x1f,0x01,0x11,0x01}, "Actalis_EV_CPS" },
	{ {0x52,0x86,0x48,0xce,0x38,0x02}, "holdInstruction" },
	{ {0x52,0x86,0x48,0xce,0x38,0x02,0x01}, "id-holdinstruction-none" },
	{ {0x52,0x86,0x48,0xce,0x38,0x02,0x02}, "id-holdinstruction-callissuer" },
	{ {0x52,0x86,0x48,0xce,0x38,0x02,0x03}, "id-holdinstruction-reject" },
	{ {0x55,0x04}, "id-at" },
	{ {0x55,0x04,0x03}, "commonName" },
	{ {0x55,0x04,0x03}, "cn" },
	{ {0x55,0x04,0x03}, "id-at-commonName" },
	{ {0x55,0x04,0x04}, "sn" },
	{ {0x55,0x04,0x04}, "surname" },
	{ {0x55,0x04,0x04}, "id-at-surname" },
	{ {0x55,0x04,0x05}, "serialNumber" },
	{ {0x55,0x04,0x06}, "c" },
	{ {0x55,0x04,0x06}, "countryName" },
	{ {0x55,0x04,0x06}, "id-at-countryName" },
	{ {0x55,0x04,0x07}, "localityName" },
	{ {0x55,0x04,0x07}, "id-at-localityName" },
	{ {0x55,0x04,0x07}, "l" },
	{ {0x55,0x04,0x08}, "st" },
	{ {0x55,0x04,0x08}, "id-at-stateOrProvinceName" },
	{ {0x55,0x04,0x09}, "street" },
	{ {0x55,0x04,0x0a}, "o" },
	{ {0x55,0x04,0x0a}, "organizationName" },
	{ {0x55,0x04,0x0a}, "id-at-organizationName" },
	{ {0x55,0x04,0x0b}, "id-at-organizationalUnitName" },
	{ {0x55,0x04,0x0b}, "ou" },
	{ {0x55,0x04,0x0b}, "organizationalUnitName" },
	{ {0x55,0x04,0x0c}, "id-at-title" },
	{ {0x55,0x04,0x0c}, "title" },
	{ {0x55,0x04,0x0d}, "description" },
	{ {0x55,0x04,0x0e}, "searchGuide" },
	{ {0x55,0x04,0x0f}, "businessCategory" },
	{ {0x55,0x04,0x10}, "postalAddress" },
	{ {0x55,0x04,0x11}, "postalCode" },
	{ {0x55,0x04,0x12}, "postOfficeBox" },
	{ {0x55,0x04,0x13}, "physicalDeliveryOfficeName" },
	{ {0x55,0x04,0x14}, "telephoneNumber" },
	{ {0x55,0x04,0x15}, "telexNumber" },
	{ {0x55,0x04,0x16}, "teletexTerminalIdentifier" },
	{ {0x55,0x04,0x17}, "facsimileTelephoneNumber" },
	{ {0x55,0x04,0x18}, "x121Address" },
	{ {0x55,0x04,0x19}, "internationalISDNNumber" },
	{ {0x55,0x04,0x1a}, "registeredAddress" },
	{ {0x55,0x04,0x1b}, "destinationIndicator" },
	{ {0x55,0x04,0x1c}, "preferredDeliveryMethod" },
	{ {0x55,0x04,0x1f}, "member" },
	{ {0x55,0x04,0x20}, "owner" },
	{ {0x55,0x04,0x21}, "roleOccupant" },
	{ {0x55,0x04,0x22}, "seeAlso" },
	{ {0x55,0x04,0x23}, "userPassword" },
	{ {0x55,0x04,0x29}, "id-at-name" },
	{ {0x55,0x04,0x29}, "name" },
	{ {0x55,0x04,0x2a}, "id-at-givenName" },
	{ {0x55,0x04,0x2a}, "givenName" },
	{ {0x55,0x04,0x2b}, "initials" },
	{ {0x55,0x04,0x2b}, "id-at-initials" },
	{ {0x55,0x04,0x2c}, "generationQualifier" },
	{ {0x55,0x04,0x2c}, "id-at-generationQualifier" },
	{ {0x55,0x04,0x2d}, "x500UniqueIdentifier" },
	{ {0x55,0x04,0x2e}, "dnQualifier" },
	{ {0x55,0x04,0x2e}, "id-at-dnQualifier" },
	{ {0x55,0x04,0x2f}, "enhancedSearchGuide" },
	{ {0x55,0x04,0x31}, "distinguishedName" },
	{ {0x55,0x04,0x32}, "uniqueMember" },
	{ {0x55,0x04,0x33}, "houseIdentifier" },
	{ {0x55,0x04,0x41}, "id-at-pseudonym" },
	{ {0x55,0x1d}, "id-ce" },
	{ {0x55,0x1d,0x01}, "DeprecatedAuthorityKeyIdentifier" },
	{ {0x55,0x1d,0x07}, "DeprecatedSubjectAltName" },
	{ {0x55,0x1d,0x09}, "id-ce-subjectDirectoryAttributes" },
	{ {0x55,0x1d,0x0e}, "id-ce-subjectKeyIdentifier" },
	{ {0x55,0x1d,0x0f}, "id-ce-keyUsage" },
	{ {0x55,0x1d,0x10}, "id-ce-privateKeyUsagePeriod" },
	{ {0x55,0x1d,0x11}, "id-ce-subjectAltName" },
	{ {0x55,0x1d,0x12}, "id-ce-issuerAltName" },
	{ {0x55,0x1d,0x13}, "id-ce-basicConstraints" },
	{ {0x55,0x1d,0x14}, "id-ce-cRLNumber" },
	{ {0x55,0x1d,0x15}, "id-ce-cRLReasons" },
	{ {0x55,0x1d,0x17}, "id-ce-holdInstructionCode" },
	{ {0x55,0x1d,0x18}, "id-ce-invalidityDate" },
	{ {0x55,0x1d,0x1b}, "id-ce-deltaCRLIndicator" },
	{ {0x55,0x1d,0x1c}, "id-ce-issuingDistributionPoint" },
	{ {0x55,0x1d,0x1d}, "id-ce-certificateIssuer" },
	{ {0x55,0x1d,0x1e}, "id-ce-nameConstraints" },
	{ {0x55,0x1d,0x1f}, "id-ce-cRLDistributionPoints" },
	{ {0x55,0x1d,0x20}, "id-ce-certificatePolicies" },
	{ {0x55,0x1d,0x20,0x20}, "anyPolicy" },
	{ {0x55,0x1d,0x21}, "id-ce-policyMappings" },
	{ {0x55,0x1d,0x22}, "DeprecatedpolicyConstraints" },
	{ {0x55,0x1d,0x23}, "id-ce-authorityKeyIdentifier" },
	{ {0x55,0x1d,0x24}, "id-ce-policyConstraints" },
	{ {0x55,0x1d,0x25}, "id-ce-extKeyUsage" },
	{ {0x55,0x1d,0x25,0x25}, "anyExtendedKeyUsage" },
	{ {0x55,0x1d,0x2e}, "id-ce-freshestCRL" },
	{ {0x55,0x1d,0x36}, "id-ce-inhibitAnyPolicy" },
	{ {0x60,0x84,0x10,0x01,0x87,0x69,0x01,0x01,0x01,0x0c,0x06,0x01,0x01,0x01}, "DigiNotar_EV_CPS" },
	{ {0x60,0x84,0x10,0x01,0x87,0x6b,0x01,0x02,0x07}, "Logius_PKIoverheid_EV_CPS" },
	{ {0x60,0x84,0x42,0x01,0x1a,0x01,0x03,0x03}, "Buypass_EV_CPS" },
	{ {0x60,0x85,0x74,0x01,0x53,0x15,0x15}, "Swisscom_EV_CPS" },
	{ {0x60,0x85,0x74,0x01,0x59,0x01,0x02,0x01,0x01}, "SwissSign_EV_CPS" },
	{ {0x60,0x86,0x18,0x01,0x02,0x01,0x01,0x05,0x07,0x01,0x09}, "Kamu_Sertifikasyon_Merkezi_EV_CPS" },
	{ {0x60,0x86,0x18,0x03,0x03,0x04,0x01,0x01,0x04}, "E-Tugra_EV_CPS" },
	{ {0x60,0x86,0x48,0x01,0x65,0x02,0x01,0x01,0x16}, "id-keyExchangeAlgorithm" },
	{ {0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x02,0x01}, "id-sha256" },
	{ {0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x02,0x02}, "id-sha384" },
	{ {0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x02,0x03}, "id-sha512" },
	{ {0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x02,0x04}, "id-sha224" },
	{ {0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x02,0x0b}, "id-shake128" },
	{ {0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x02,0x0c}, "id-shake256" },
	{ {0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x03,0x01}, "id-dsa-with-sha224" },
	{ {0x60,0x86,0x48,0x01,0x65,0x03,0x04,0x03,0x02}, "id-dsa-with-sha256" },
	{ {0x60,0x86,0x48,0x01,0x86,0xf8,0x42,0x01}, "NetscapeCertificateExtension" },
	{ {0x60,0x86,0x48,0x01,0x86,0xf8,0x42,0x01,0x03}, "RevocationURL" },
	{ {0x60,0x86,0x48,0x01,0x86,0xf8,0x42,0x01,0x04}, "CaRevocationURL" },
	{ {0x60,0x86,0x48,0x01,0x86,0xf8,0x42,0x01,0x0c}, "SSLServerName" },
	{ {0x60,0x86,0x48,0x01,0x86,0xf8,0x42,0x01,0x0d}, "NetscapeCertificateComment" },
	{ {0x60,0x86,0x48,0x01,0x86,0xf8,0x42,0x03,0x01,0x81,0x58}, "pkcs-9-at-userPKCS12" },
	{ {0x60,0x86,0x48,0x01,0x86,0xf8,0x45,0x01,0x07,0x17,0x06}, "Symantec_EV_CPS" },
	{ {0x60,0x86,0x48,0x01,0x86,0xf8,0x45,0x01,0x07,0x30,0x01}, "Thawte_EV_CPS" },
	{ {0x60,0x86,0x48,0x01,0x86,0xfa,0x6c,0x0a,0x01,0x02}, "Entrust_EV_CPS" },
	{ {0x60,0x86,0x48,0x01,0x86,0xfb,0x7b,0x83,0x74,0x09}, "Wells_Fargo_EV_CPS" },
	{ {0x60,0x86,0x48,0x01,0x86,0xfd,0x64,0x01,0x01,0x02,0x04,0x01}, "Trustwave_EV_CPS" },
	{ {0x60,0x86,0x48,0x01,0x86,0xfd,0x6c,0x01,0x03,0x03,0x02}, "DigiCert_EV_CPS" },
	{ {0x60,0x86,0x48,0x01,0x86,0xfd,0x6d,0x01,0x07,0x17,0x03}, "Go_Daddy_EV_CPS" },
	{ {0x60,0x86,0x48,0x01,0x86,0xfd,0x6e,0x01,0x07,0x17,0x03}, "Starfield_Technologies_EV_CPS" },
};
