// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// extract_mcc
std::vector < std::string > extract_mcc(std::vector < std::string > x_analytics);
RcppExport SEXP WMUtils_extract_mcc(SEXP x_analyticsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::vector < std::string > >::type x_analytics(x_analyticsSEXP );
        std::vector < std::string > __result = extract_mcc(x_analytics);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// xff_handler
std::vector< std::string > xff_handler(std::vector< std::string > ips);
RcppExport SEXP WMUtils_xff_handler(SEXP ipsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::vector< std::string > >::type ips(ipsSEXP );
        std::vector< std::string > __result = xff_handler(ips);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// geo_country
std::vector < std::string > geo_country(std::vector < std::string > ip_addresses);
RcppExport SEXP WMUtils_geo_country(SEXP ip_addressesSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::vector < std::string > >::type ip_addresses(ip_addressesSEXP );
        std::vector < std::string > __result = geo_country(ip_addresses);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// geo_city
std::vector < std::string > geo_city(std::vector < std::string > ip_addresses);
RcppExport SEXP WMUtils_geo_city(SEXP ip_addressesSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::vector < std::string > >::type ip_addresses(ip_addressesSEXP );
        std::vector < std::string > __result = geo_city(ip_addresses);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// geo_region
std::vector < std::string > geo_region(std::vector < std::string > ip_addresses);
RcppExport SEXP WMUtils_geo_region(SEXP ip_addressesSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::vector < std::string > >::type ip_addresses(ip_addressesSEXP );
        std::vector < std::string > __result = geo_region(ip_addresses);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// geo_tz
std::vector < std::string > geo_tz(std::vector < std::string > ip_addresses);
RcppExport SEXP WMUtils_geo_tz(SEXP ip_addressesSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::vector < std::string > >::type ip_addresses(ip_addressesSEXP );
        std::vector < std::string > __result = geo_tz(ip_addresses);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// geo_netspeed
std::vector < std::string > geo_netspeed(std::vector < std::string > ip_addresses);
RcppExport SEXP WMUtils_geo_netspeed(SEXP ip_addressesSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::vector < std::string > >::type ip_addresses(ip_addressesSEXP );
        std::vector < std::string > __result = geo_netspeed(ip_addresses);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// session_count
int session_count(NumericVector x, int local_minimum = 3600);
RcppExport SEXP WMUtils_session_count(SEXP xSEXP, SEXP local_minimumSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP );
        Rcpp::traits::input_parameter< int >::type local_minimum(local_minimumSEXP );
        int __result = session_count(x, local_minimum);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// session_length
NumericVector session_length(NumericVector intertimes, int local_minimum = 3600, int average_intertime = 430);
RcppExport SEXP WMUtils_session_length(SEXP intertimesSEXP, SEXP local_minimumSEXP, SEXP average_intertimeSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type intertimes(intertimesSEXP );
        Rcpp::traits::input_parameter< int >::type local_minimum(local_minimumSEXP );
        Rcpp::traits::input_parameter< int >::type average_intertime(average_intertimeSEXP );
        NumericVector __result = session_length(intertimes, local_minimum, average_intertime);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// session_pages
NumericVector session_pages(NumericVector intertimes, int local_minimum = 3600);
RcppExport SEXP WMUtils_session_pages(SEXP intertimesSEXP, SEXP local_minimumSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type intertimes(intertimesSEXP );
        Rcpp::traits::input_parameter< int >::type local_minimum(local_minimumSEXP );
        NumericVector __result = session_pages(intertimes, local_minimum);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// cpp_intertimes
NumericVector cpp_intertimes(NumericVector timestamps);
RcppExport SEXP WMUtils_cpp_intertimes(SEXP timestampsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type timestamps(timestampsSEXP );
        NumericVector __result = cpp_intertimes(timestamps);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// c_ua_parse
DataFrame c_ua_parse(std::vector < std::string > agents, std::string regex_file);
RcppExport SEXP WMUtils_c_ua_parse(SEXP agentsSEXP, SEXP regex_fileSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::vector < std::string > >::type agents(agentsSEXP );
        Rcpp::traits::input_parameter< std::string >::type regex_file(regex_fileSEXP );
        DataFrame __result = c_ua_parse(agents, regex_file);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// host_handler
std::vector< std::string > host_handler(std::vector < std::string > urls);
RcppExport SEXP WMUtils_host_handler(SEXP urlsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::vector < std::string > >::type urls(urlsSEXP );
        std::vector< std::string > __result = host_handler(urls);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// project_extractor
std::vector < std::string > project_extractor(std::vector < std::string > urls);
RcppExport SEXP WMUtils_project_extractor(SEXP urlsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::vector < std::string > >::type urls(urlsSEXP );
        std::vector < std::string > __result = project_extractor(urls);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// parse_uuids
std::vector< std::string > parse_uuids(std::vector< std::string > urls);
RcppExport SEXP WMUtils_parse_uuids(SEXP urlsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::vector< std::string > >::type urls(urlsSEXP );
        std::vector< std::string > __result = parse_uuids(urls);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
