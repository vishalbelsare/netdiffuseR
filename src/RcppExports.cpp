// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// adopt_mat_cpp
List adopt_mat_cpp(const IntegerVector& year);
RcppExport SEXP diffusiontest_adopt_mat_cpp(SEXP yearSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const IntegerVector& >::type year(yearSEXP);
    __result = Rcpp::wrap(adopt_mat_cpp(year));
    return __result;
END_RCPP
}
// edgelist_to_adjmat_cpp
arma::mat edgelist_to_adjmat_cpp(const arma::mat& edgelist, NumericVector weights, int n, bool undirected);
RcppExport SEXP diffusiontest_edgelist_to_adjmat_cpp(SEXP edgelistSEXP, SEXP weightsSEXP, SEXP nSEXP, SEXP undirectedSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::mat& >::type edgelist(edgelistSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< bool >::type undirected(undirectedSEXP);
    __result = Rcpp::wrap(edgelist_to_adjmat_cpp(edgelist, weights, n, undirected));
    return __result;
END_RCPP
}
// adjmat_to_edgelist_cpp
arma::mat adjmat_to_edgelist_cpp(const arma::mat& adjmat, bool undirected);
RcppExport SEXP diffusiontest_adjmat_to_edgelist_cpp(SEXP adjmatSEXP, SEXP undirectedSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::mat& >::type adjmat(adjmatSEXP);
    Rcpp::traits::input_parameter< bool >::type undirected(undirectedSEXP);
    __result = Rcpp::wrap(adjmat_to_edgelist_cpp(adjmat, undirected));
    return __result;
END_RCPP
}
// adjmat_to_dyn_edgelist_cpp
arma::mat adjmat_to_dyn_edgelist_cpp(NumericVector adjmat, bool undirected);
RcppExport SEXP diffusiontest_adjmat_to_dyn_edgelist_cpp(SEXP adjmatSEXP, SEXP undirectedSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type adjmat(adjmatSEXP);
    Rcpp::traits::input_parameter< bool >::type undirected(undirectedSEXP);
    __result = Rcpp::wrap(adjmat_to_dyn_edgelist_cpp(adjmat, undirected));
    return __result;
END_RCPP
}
// toa_mat_cpp
IntegerMatrix toa_mat_cpp(const IntegerVector& year);
RcppExport SEXP diffusiontest_toa_mat_cpp(SEXP yearSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const IntegerVector& >::type year(yearSEXP);
    __result = Rcpp::wrap(toa_mat_cpp(year));
    return __result;
END_RCPP
}
// isolated_cpp
arma::colvec isolated_cpp(const arma::mat& adjmat, bool undirected);
RcppExport SEXP diffusiontest_isolated_cpp(SEXP adjmatSEXP, SEXP undirectedSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::mat& >::type adjmat(adjmatSEXP);
    Rcpp::traits::input_parameter< bool >::type undirected(undirectedSEXP);
    __result = Rcpp::wrap(isolated_cpp(adjmat, undirected));
    return __result;
END_RCPP
}
// drop_isolated_cpp
arma::mat drop_isolated_cpp(const arma::mat& adjmat, bool undirected);
RcppExport SEXP diffusiontest_drop_isolated_cpp(SEXP adjmatSEXP, SEXP undirectedSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::mat& >::type adjmat(adjmatSEXP);
    Rcpp::traits::input_parameter< bool >::type undirected(undirectedSEXP);
    __result = Rcpp::wrap(drop_isolated_cpp(adjmat, undirected));
    return __result;
END_RCPP
}
// rand_graph_cpp
arma::mat rand_graph_cpp(int n, double p, bool undirected, bool weighted, bool self);
RcppExport SEXP diffusiontest_rand_graph_cpp(SEXP nSEXP, SEXP pSEXP, SEXP undirectedSEXP, SEXP weightedSEXP, SEXP selfSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    Rcpp::traits::input_parameter< bool >::type undirected(undirectedSEXP);
    Rcpp::traits::input_parameter< bool >::type weighted(weightedSEXP);
    Rcpp::traits::input_parameter< bool >::type self(selfSEXP);
    __result = Rcpp::wrap(rand_graph_cpp(n, p, undirected, weighted, self));
    return __result;
END_RCPP
}
// rand_dyn_graph_cpp
arma::cube rand_dyn_graph_cpp(int n, int t, double p, bool undirected, bool weighted, bool self);
RcppExport SEXP diffusiontest_rand_dyn_graph_cpp(SEXP nSEXP, SEXP tSEXP, SEXP pSEXP, SEXP undirectedSEXP, SEXP weightedSEXP, SEXP selfSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type t(tSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    Rcpp::traits::input_parameter< bool >::type undirected(undirectedSEXP);
    Rcpp::traits::input_parameter< bool >::type weighted(weightedSEXP);
    Rcpp::traits::input_parameter< bool >::type self(selfSEXP);
    __result = Rcpp::wrap(rand_dyn_graph_cpp(n, t, p, undirected, weighted, self));
    return __result;
END_RCPP
}
// select_egoalter_cpp
List select_egoalter_cpp(const NumericMatrix& adjmat_t0, const NumericMatrix& adjmat_t1, const NumericVector& adopt_t0, const NumericVector& adopt_t1);
RcppExport SEXP diffusiontest_select_egoalter_cpp(SEXP adjmat_t0SEXP, SEXP adjmat_t1SEXP, SEXP adopt_t0SEXP, SEXP adopt_t1SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type adjmat_t0(adjmat_t0SEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type adjmat_t1(adjmat_t1SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type adopt_t0(adopt_t0SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type adopt_t1(adopt_t1SEXP);
    __result = Rcpp::wrap(select_egoalter_cpp(adjmat_t0, adjmat_t1, adopt_t0, adopt_t1));
    return __result;
END_RCPP
}
// degree_cpp
arma::colvec degree_cpp(const arma::mat& adjmat, const int& cmode, bool undirected, bool self);
RcppExport SEXP diffusiontest_degree_cpp(SEXP adjmatSEXP, SEXP cmodeSEXP, SEXP undirectedSEXP, SEXP selfSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::mat& >::type adjmat(adjmatSEXP);
    Rcpp::traits::input_parameter< const int& >::type cmode(cmodeSEXP);
    Rcpp::traits::input_parameter< bool >::type undirected(undirectedSEXP);
    Rcpp::traits::input_parameter< bool >::type self(selfSEXP);
    __result = Rcpp::wrap(degree_cpp(adjmat, cmode, undirected, self));
    return __result;
END_RCPP
}
// exposure_cpp
arma::mat exposure_cpp(NumericVector graph, const arma::mat& cumadopt, int wtype, double v, bool undirected);
RcppExport SEXP diffusiontest_exposure_cpp(SEXP graphSEXP, SEXP cumadoptSEXP, SEXP wtypeSEXP, SEXP vSEXP, SEXP undirectedSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type cumadopt(cumadoptSEXP);
    Rcpp::traits::input_parameter< int >::type wtype(wtypeSEXP);
    Rcpp::traits::input_parameter< double >::type v(vSEXP);
    Rcpp::traits::input_parameter< bool >::type undirected(undirectedSEXP);
    __result = Rcpp::wrap(exposure_cpp(graph, cumadopt, wtype, v, undirected));
    return __result;
END_RCPP
}
// cumulative_adopt_count_cpp
arma::mat cumulative_adopt_count_cpp(const arma::mat& cumadopt);
RcppExport SEXP diffusiontest_cumulative_adopt_count_cpp(SEXP cumadoptSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::mat& >::type cumadopt(cumadoptSEXP);
    __result = Rcpp::wrap(cumulative_adopt_count_cpp(cumadopt));
    return __result;
END_RCPP
}
// hazard_rate_cpp
arma::rowvec hazard_rate_cpp(const arma::mat& cumadopt);
RcppExport SEXP diffusiontest_hazard_rate_cpp(SEXP cumadoptSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::mat& >::type cumadopt(cumadoptSEXP);
    __result = Rcpp::wrap(hazard_rate_cpp(cumadopt));
    return __result;
END_RCPP
}
// threshold_cpp
arma::colvec threshold_cpp(const arma::mat& exposure, const arma::vec& toe);
RcppExport SEXP diffusiontest_threshold_cpp(SEXP exposureSEXP, SEXP toeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::mat& >::type exposure(exposureSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type toe(toeSEXP);
    __result = Rcpp::wrap(threshold_cpp(exposure, toe));
    return __result;
END_RCPP
}
// struct_equiv_cpp
List struct_equiv_cpp(const arma::mat& gdist, double v, bool unscaled, bool inv, double invrep);
RcppExport SEXP diffusiontest_struct_equiv_cpp(SEXP gdistSEXP, SEXP vSEXP, SEXP unscaledSEXP, SEXP invSEXP, SEXP invrepSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const arma::mat& >::type gdist(gdistSEXP);
    Rcpp::traits::input_parameter< double >::type v(vSEXP);
    Rcpp::traits::input_parameter< bool >::type unscaled(unscaledSEXP);
    Rcpp::traits::input_parameter< bool >::type inv(invSEXP);
    Rcpp::traits::input_parameter< double >::type invrep(invrepSEXP);
    __result = Rcpp::wrap(struct_equiv_cpp(gdist, v, unscaled, inv, invrep));
    return __result;
END_RCPP
}