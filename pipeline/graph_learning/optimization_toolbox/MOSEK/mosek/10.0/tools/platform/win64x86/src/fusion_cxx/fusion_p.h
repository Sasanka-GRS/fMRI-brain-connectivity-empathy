#ifndef __FUSION_P_H__
#define __FUSION_P_H__
#include "monty.h"
#include "mosektask_p.h"
#include "list"
#include "vector"
#include "unordered_map"
#include "fusion.h"
namespace mosek
{
  namespace fusion
  {
    struct p_Disjunction
    {
      Disjunction * _pubthis;
      static mosek::fusion::p_Disjunction* _get_impl(mosek::fusion::Disjunction * _inst){ assert(_inst); assert(_inst->_impl); return _inst->_impl; }
      static mosek::fusion::p_Disjunction * _get_impl(mosek::fusion::Disjunction::t _inst) { return _get_impl(_inst.get()); }
      p_Disjunction(Disjunction * _pubthis);
      virtual ~p_Disjunction() { /* std::cout << "~p_Disjunction" << std::endl;*/ };
      int64_t id{};

      virtual void destroy();

      static Disjunction::t _new_Disjunction(int64_t _7_id);
      void _initialize(int64_t _7_id);
    }; // struct Disjunction;

    struct p_Term
    {
      Term * _pubthis;
      static mosek::fusion::p_Term* _get_impl(mosek::fusion::Term * _inst){ assert(_inst); assert(_inst->_impl); return _inst->_impl; }
      static mosek::fusion::p_Term * _get_impl(mosek::fusion::Term::t _inst) { return _get_impl(_inst.get()); }
      p_Term(Term * _pubthis);
      virtual ~p_Term() { /* std::cout << "~p_Term" << std::endl;*/ };
      std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::SimpleTerm >,1 > > terms{};

      virtual void destroy();

      static Term::t _new_Term(std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::SimpleTerm >,1 > > _8_t);
      void _initialize(std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::SimpleTerm >,1 > > _8_t);
      virtual int32_t numaccterms() ;
      virtual int32_t numaccrows() ;
      virtual int32_t num() ;
      virtual int32_t size() ;
    }; // struct Term;

    struct p_SimpleTerm : public ::mosek::fusion::p_Term
    {
      SimpleTerm * _pubthis;
      static mosek::fusion::p_SimpleTerm* _get_impl(mosek::fusion::SimpleTerm * _inst){ return static_cast< mosek::fusion::p_SimpleTerm* >(mosek::fusion::p_Term::_get_impl(_inst)); }
      static mosek::fusion::p_SimpleTerm * _get_impl(mosek::fusion::SimpleTerm::t _inst) { return _get_impl(_inst.get()); }
      p_SimpleTerm(SimpleTerm * _pubthis);
      virtual ~p_SimpleTerm() { /* std::cout << "~p_SimpleTerm" << std::endl;*/ };
      monty::rc_ptr< ::mosek::fusion::DJCDomain > dom{};
      monty::rc_ptr< ::mosek::fusion::Expression > expr{};

      virtual void destroy();

      static SimpleTerm::t _new_SimpleTerm(monty::rc_ptr< ::mosek::fusion::Expression > _15_e,monty::rc_ptr< ::mosek::fusion::DJCDomain > _16_d);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Expression > _15_e,monty::rc_ptr< ::mosek::fusion::DJCDomain > _16_d);
      virtual /* override */ int32_t numaccterms() ;
      virtual /* override */ int32_t numaccrows() ;
      virtual /* override */ int32_t size() ;
    }; // struct SimpleTerm;

    struct p_DJCDomain
    {
      DJCDomain * _pubthis;
      static mosek::fusion::p_DJCDomain* _get_impl(mosek::fusion::DJCDomain * _inst){ assert(_inst); assert(_inst->_impl); return _inst->_impl; }
      static mosek::fusion::p_DJCDomain * _get_impl(mosek::fusion::DJCDomain::t _inst) { return _get_impl(_inst.get()); }
      p_DJCDomain(DJCDomain * _pubthis);
      virtual ~p_DJCDomain() { /* std::cout << "~p_DJCDomain" << std::endl;*/ };
      mosek::fusion::DJCDomainType dom{};
      int32_t conedim{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > shape{};
      std::shared_ptr< monty::ndarray< double,1 > > par{};
      std::shared_ptr< monty::ndarray< double,1 > > b{};

      virtual void destroy();

      static DJCDomain::t _new_DJCDomain(std::shared_ptr< monty::ndarray< double,1 > > _17_b_,std::shared_ptr< monty::ndarray< double,1 > > _18_par_,std::shared_ptr< monty::ndarray< int32_t,1 > > _19_shape_,mosek::fusion::DJCDomainType _20_dom_);
      void _initialize(std::shared_ptr< monty::ndarray< double,1 > > _17_b_,std::shared_ptr< monty::ndarray< double,1 > > _18_par_,std::shared_ptr< monty::ndarray< int32_t,1 > > _19_shape_,mosek::fusion::DJCDomainType _20_dom_);
      static DJCDomain::t _new_DJCDomain(std::shared_ptr< monty::ndarray< double,1 > > _21_b_,std::shared_ptr< monty::ndarray< double,1 > > _22_par_,std::shared_ptr< monty::ndarray< int32_t,1 > > _23_shape_,int32_t _24_conedim_,mosek::fusion::DJCDomainType _25_dom_);
      void _initialize(std::shared_ptr< monty::ndarray< double,1 > > _21_b_,std::shared_ptr< monty::ndarray< double,1 > > _22_par_,std::shared_ptr< monty::ndarray< int32_t,1 > > _23_shape_,int32_t _24_conedim_,mosek::fusion::DJCDomainType _25_dom_);
      virtual int32_t numaccterms() ;
      virtual int32_t numaccrows() ;
      virtual int32_t size() ;
    }; // struct DJCDomain;

    struct p_DJC
    {
      DJC * _pubthis;
      static mosek::fusion::p_DJC* _get_impl(mosek::fusion::DJC * _inst){ assert(_inst); assert(_inst->_impl); return _inst->_impl; }
      static mosek::fusion::p_DJC * _get_impl(mosek::fusion::DJC::t _inst) { return _get_impl(_inst.get()); }
      p_DJC(DJC * _pubthis);
      virtual ~p_DJC() { /* std::cout << "~p_DJC" << std::endl;*/ };

      virtual void destroy();

      static  monty::rc_ptr< ::mosek::fusion::Term > AND(monty::rc_ptr< ::mosek::fusion::SimpleTerm > _28_s1,monty::rc_ptr< ::mosek::fusion::SimpleTerm > _29_s2,monty::rc_ptr< ::mosek::fusion::SimpleTerm > _30_s3);
      static  monty::rc_ptr< ::mosek::fusion::Term > AND(monty::rc_ptr< ::mosek::fusion::SimpleTerm > _31_s1,monty::rc_ptr< ::mosek::fusion::SimpleTerm > _32_s2);
      static  monty::rc_ptr< ::mosek::fusion::Term > AND(monty::rc_ptr< ::mosek::fusion::SimpleTerm > _33_s1);
      static  monty::rc_ptr< ::mosek::fusion::Term > AND(std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::SimpleTerm >,1 > > _34_slist);
      static  monty::rc_ptr< ::mosek::fusion::SimpleTerm > term(monty::rc_ptr< ::mosek::fusion::Expression > _35_expr,monty::rc_ptr< ::mosek::fusion::RangeDomain > _36_dom);
      static  monty::rc_ptr< ::mosek::fusion::SimpleTerm > term(monty::rc_ptr< ::mosek::fusion::Variable > _47_x,monty::rc_ptr< ::mosek::fusion::RangeDomain > _48_dom);
      static  monty::rc_ptr< ::mosek::fusion::SimpleTerm > term(monty::rc_ptr< ::mosek::fusion::Expression > _49_expr,monty::rc_ptr< ::mosek::fusion::LinearDomain > _50_dom);
      static  monty::rc_ptr< ::mosek::fusion::SimpleTerm > term(monty::rc_ptr< ::mosek::fusion::Variable > _58_x,monty::rc_ptr< ::mosek::fusion::LinearDomain > _59_dom);
    }; // struct DJC;

    // mosek.fusion.BaseModel from file 'src/fusion/cxx/BaseModel_p.h'
    // namespace mosek::fusion
    struct p_BaseModel
    {
      p_BaseModel(BaseModel * _pubthis);
    
      void _initialize( monty::rc_ptr<BaseModel> m);
      void _initialize( const std::string & name,
                        const std::string & licpath);
    
      virtual ~p_BaseModel() { /* std::cout << "~p_BaseModel()" << std::endl;*/  }
    
      static p_BaseModel * _get_impl(Model * _inst) { return _inst->_impl; }
    
      //----------------------
    
      bool synched;
      std::string taskname;
    
      monty::rc_ptr<SolutionStruct> sol_itr;
      monty::rc_ptr<SolutionStruct> sol_itg;
      monty::rc_ptr<SolutionStruct> sol_bas;
    
      MSKsoltypee cursol;
      //---------------------
    
      std::unique_ptr<Task> task;
    
      //---------------------
      template<class T>
      using array_t = std::shared_ptr<monty::ndarray<T,1>>;
    
      virtual void clear_solutions() = 0;
      virtual void report_solution(SolutionType soltype,
                                   ProblemStatus prosta,
                                   SolutionStatus psolsta,
                                   SolutionStatus dsolsta,
                                   double pobj,
                                   double dobj,
                                   int32_t numvar,
                                   int32_t numcon,
                                   int32_t numbarelm,
                                   int32_t numacc,
                                   int32_t numaccelm,
                                   bool hasprimal,
                                   bool hasdual) = 0;
    
      void report_solution_get_xx(array_t<double> v);
      void report_solution_get_slx(array_t<double> v);
      void report_solution_get_sux(array_t<double> v);
      void report_solution_get_xc(array_t<double> v);
      void report_solution_get_slc(array_t<double> v);
      void report_solution_get_suc(array_t<double> v);
      void report_solution_get_barx(array_t<double> v);
      void report_solution_get_bars(array_t<double> v);
      void report_solution_get_accx(array_t<double> v);
      void report_solution_get_accy(array_t<double> v);
      void report_solution_get_accptr(array_t<int32_t> v);
    
      //---------------------
      void task_setLogHandler (const msghandler_t & handler);
      void task_setDataCallbackHandler (const datacbhandler_t & handler);
      void task_setCallbackHandler (const cbhandler_t & handler);
    
      int task_append_barvar(int size, int num);
    
      void task_djc_name   (int64_t index, const std::string & name);
      void task_var_name   (int index, const std::string & name);
      void task_con_name   (int index, const std::string & name);
      void task_barvar_name(int index, const std::string & name);
      void task_objectivename(         const std::string & name);
    
      void task_format_djc_names
      ( const std::shared_ptr<monty::ndarray<int64_t,1>> sub,
        const std::string                              & format,
        const std::shared_ptr<monty::ndarray<int,1>>     dims,
        const std::shared_ptr<monty::ndarray<std::shared_ptr<monty::ndarray<std::string,1>>>> names);
      void task_format_acc_names
      ( const std::shared_ptr<monty::ndarray<int64_t,1>> sub,
        const std::string                              & format,
        const std::shared_ptr<monty::ndarray<int,1>>     dims,
        const std::shared_ptr<monty::ndarray<std::shared_ptr<monty::ndarray<std::string,1>>>> names);
      void task_format_var_names
      ( const std::shared_ptr<monty::ndarray<int,1>>     subj,
        const std::string                              & format,
        const std::shared_ptr<monty::ndarray<int,1>>     dims,
        const std::shared_ptr<monty::ndarray<int64_t,1>> sp,
        const std::shared_ptr<monty::ndarray<std::shared_ptr<monty::ndarray<std::string,1>>>> names);
      void task_format_con_names
      ( const std::shared_ptr<monty::ndarray<int,1>>     subi,
        const std::string                              & format,
        const std::shared_ptr<monty::ndarray<int,1>>     dims,
        const std::shared_ptr<monty::ndarray<int64_t,1>> sp,
        const std::shared_ptr<monty::ndarray<std::shared_ptr<monty::ndarray<std::string,1>>>> names);
      void task_format_barvar_names
      ( const std::shared_ptr<monty::ndarray<int,1>>     subj,
        const std::string                              & format,
        const std::shared_ptr<monty::ndarray<int,1>>     dims,
        const std::shared_ptr<monty::ndarray<std::shared_ptr<monty::ndarray<std::string,1>>>> names);
    
      void task_break_solve();
    
      //--------------------------
    
      int task_numvar();
      int task_numcon();
      int task_numbarvar();
      int task_numacc();
      int task_numdjc();
      int task_numafe();
    
      //--------------------------
    
      void task_put_param(const std::string & name, const std::string & value);
      void task_put_param(const std::string & name, int    value);
      void task_put_param(const std::string & name, double value);
    
      double    task_get_dinf (const std::string & name);
      int       task_get_iinf (const std::string & name);
      int64_t task_get_liinf(const std::string & name);
    
      //--------------------------
    
      void task_con_putboundlist_fr(const std::shared_ptr<monty::ndarray<int,1>> idxs);
      void task_con_putboundlist_lo(const std::shared_ptr<monty::ndarray<int,1>> idxs, const std::shared_ptr<monty::ndarray<double,1>> & rhs);
      void task_con_putboundlist_up(const std::shared_ptr<monty::ndarray<int,1>> idxs, const std::shared_ptr<monty::ndarray<double,1>> & rhs);
      void task_con_putboundlist_fx(const std::shared_ptr<monty::ndarray<int,1>> idxs, const std::shared_ptr<monty::ndarray<double,1>> & rhs);
      void task_con_putboundlist_ra(const std::shared_ptr<monty::ndarray<int,1>> idxs, const std::shared_ptr<monty::ndarray<double,1>> & lb ,
                                    const std::shared_ptr<monty::ndarray<double,1>> & ub );
    
      void task_var_putboundlist_fr(const std::shared_ptr<monty::ndarray<int,1>> idxs);
      void task_var_putboundlist_lo(const std::shared_ptr<monty::ndarray<int,1>> idxs, const std::shared_ptr<monty::ndarray<double,1>> & rhs);
      void task_var_putboundlist_up(const std::shared_ptr<monty::ndarray<int,1>> idxs, const std::shared_ptr<monty::ndarray<double,1>> & rhs);
      void task_var_putboundlist_fx(const std::shared_ptr<monty::ndarray<int,1>> idxs, const std::shared_ptr<monty::ndarray<double,1>> & rhs);
      void task_var_putboundlist_ra(const std::shared_ptr<monty::ndarray<int,1>> idxs, const std::shared_ptr<monty::ndarray<double,1>> & lb ,
                                    const std::shared_ptr<monty::ndarray<double,1>> & ub );
    
      void task_var_putintlist(const std::shared_ptr<monty::ndarray<int,1>> & idxs);
      void task_var_putcontlist(const std::shared_ptr<monty::ndarray<int,1>> & idxs);
    
      //--------------------------
    
      void task_putbararowlist(const std::shared_ptr<monty::ndarray<int,1>>       subi,
                               const std::shared_ptr<monty::ndarray<int64_t,1>> ptr,
                               const std::shared_ptr<monty::ndarray<int,1>>       subj,
                               const std::shared_ptr<monty::ndarray<int64_t,1>> matidx);
    
      void task_putbaraijlist(const std::shared_ptr<monty::ndarray<int,1>> subi,
                              const std::shared_ptr<monty::ndarray<int,1>> subj,
                              std::shared_ptr<monty::ndarray<int64_t,1>> matidx);
    
      void task_putbarc(const std::shared_ptr<monty::ndarray<int,1>> subj,
                        const std::shared_ptr<monty::ndarray<int,1>> subl,
                        const std::shared_ptr<monty::ndarray<int,1>> subk,
                        const std::shared_ptr<monty::ndarray<double,1>> val);
    
      std::shared_ptr<monty::ndarray<int64_t,1>> task_appendsymmatlist (const std::shared_ptr<monty::ndarray<int,1>>       & dim,
                                                                        const std::shared_ptr<monty::ndarray<int64_t,1>> & nz,
                                                                        const std::shared_ptr<monty::ndarray<int,1>>       & subk,
                                                                        const std::shared_ptr<monty::ndarray<int,1>>       & subl,
                                                                        const std::shared_ptr<monty::ndarray<double,1>>    & val);
      int  task_barvar_dim(int j);
      void task_putbaraij (int i, int j, int k);
      void task_putbaraij (int i, int j, const std::shared_ptr<monty::ndarray<int,1>> & k);
      void task_putbarcj  (int j, int k);
      void task_putbarcj  (int j,        const std::shared_ptr<monty::ndarray<int,1>> & k);
      int  task_barvardim (int index);
    
      int task_append_var(int num);
      int task_append_con(int num);
    
      void task_cleararowlist(const std::shared_ptr<monty::ndarray<int,1>> & idxs);
      void task_clearacollist(const std::shared_ptr<monty::ndarray<int,1>> & idxs);
    
      void task_putarowlist(
        const std::shared_ptr<monty::ndarray<int,1>>       & idxs,
        const std::shared_ptr<monty::ndarray<int64_t,1>> & ptrb,
        const std::shared_ptr<monty::ndarray<int,1>>       & subj,
        const std::shared_ptr<monty::ndarray<double,1>>    & cof);
      void task_putaijlist(
        const std::shared_ptr<monty::ndarray<int,1>>       & subi,
        const std::shared_ptr<monty::ndarray<int,1>>       & subj,
        const std::shared_ptr<monty::ndarray<double,1>>    & cof,
        int64_t                           num);
    
      void task_setnumvar(int num);
      void task_cleanup(int oldnum, int oldnumcon, int oldnumcone, int oldnumbarvar);
      void task_putoptserver_host(const std::string & addr);
      void report_task_solution(MSKsoltypee st, int numvar, int numcon, int numbarelm, int64_t numacc, int64_t numaccelm);
    
      void task_solve(bool remote, const std::string & server, const std::string & port);
      void task_post_solve();
      static std::shared_ptr<monty::ndarray<SolverStatus,1>>  env_solve_batch(bool israce, 
                                                                              double timelimit, 
                                                                              int numthreads, 
                                                                              std::shared_ptr<monty::ndarray<Model::t,1>> & models);
    
      void task_putobjective(
        bool                             maximize,
        const std::shared_ptr<monty::ndarray<int,1>>    & subj    ,
        const std::shared_ptr<monty::ndarray<double,1>> & cof     ,
        double                           cfix    );
    
      void task_putclist(
        const std::shared_ptr<monty::ndarray<int,1>>    & subj,
        const std::shared_ptr<monty::ndarray<double,1>> & cof);
    
    
      void task_putobjectivename(const std::string & name);
    
      void task_write(const std::string & filename);
      void task_write_stream(const std::string & ext, std::ostream & stream);
      void task_dump (const std::string & filename);
    
      MSKtask_t task_get();
      MSKtask_t __mosek_2fusion_2BaseModel__task_get();
    
      void dispose();
    
      void task_putxx_slice(SolutionType which, int first, int last, std::shared_ptr<monty::ndarray<double,1>> & xx);
    
      static void env_syeig (int n, std::shared_ptr<monty::ndarray<double,1>> & a, std::shared_ptr<monty::ndarray<double,1>> & w);
      static void env_potrf (int n, std::shared_ptr<monty::ndarray<double,1>> & a);
      static void env_syevd (int n, std::shared_ptr<monty::ndarray<double,1>> & a, std::shared_ptr<monty::ndarray<double,1>> & w);
    
      static void env_putlicensecode(std::shared_ptr<monty::ndarray<int,1>> code);
      static void env_putlicensepath(const std::string &licfile);
      static void env_putlicensewait(int wait);
    
      static std::string env_getversion();
    
      // void convertSolutionStatus(MSKsoltypee soltype, p_SolutionStruct * sol, MSKsolstae status, MSKprostae prosta);
    
      int64_t task_append_afes (int64_t n);
      void task_putafeflist  (array_t<int64_t> idxs, array_t<int> ptr, array_t<int>subj, array_t<double>cof, array_t<double>g);
      void task_putafebarfrowlist (array_t<int> idxs, array_t<int> ptr, array_t<int> barsubj, array_t<int64_t> symmatidx);
      void task_putafefijlist (array_t<int> &idxs, array_t<int> &subj, array_t<double> &cof);
      void task_putafefglist (array_t<int64_t> idxs, array_t<double> g);
      void task_clearafelist (array_t<int64_t>idxs);
      void task_putacclist  (array_t<int64_t>idxs, array_t<int64_t>domidxs, array_t<int64_t>afeidxs_t,array_t<double>g);
      void task_append_accs ( int64_t domidx, int numcone,array_t<int64_t> afeidxs,array_t<double> g);
    
      int64_t task_append_domain_quad     (int conesize);
      int64_t task_append_domain_rquad    (int conesize);
      int64_t task_append_domain_pexp     ();
      int64_t task_append_domain_ppow     (int conesize,array_t<double> alpha);
      int64_t task_append_domain_dexp     ();
      int64_t task_append_domain_dpow     (int conesize,array_t<double> alpha);
      /* int64_t task_append_domain_onenorm  (int conesize); */
      /* int64_t task_append_domain_infnorm  (int conesize); */
      int64_t task_append_domain_pgeomean (int conesize);
      int64_t task_append_domain_dgeomean (int conesize);
      int64_t task_append_domain_rpos     (int conesize);
      int64_t task_append_domain_rneg     (int conesize);
      int64_t task_append_domain_r        (int conesize);
      int64_t task_append_domain_rzero    (int conesize);
      int64_t task_append_domain_svec_psd (int conesize);
      int64_t task_append_domain_empty    ();
      int64_t task_append_djc             (int64_t n);
      void task_putdjcslice(int64_t first, int64_t last , array_t<int64_t> numterm_t, array_t<int64_t> termsizes, array_t<int64_t> domidxlist, array_t<int64_t> afeidxlist,  array_t<double> b);
    
    };
    // End of file 'src/fusion/cxx/BaseModel_p.h'
    struct p_Model : public ::mosek::fusion::p_BaseModel
    {
      Model * _pubthis;
      static mosek::fusion::p_Model* _get_impl(mosek::fusion::Model * _inst){ return static_cast< mosek::fusion::p_Model* >(mosek::fusion::p_BaseModel::_get_impl(_inst)); }
      static mosek::fusion::p_Model * _get_impl(mosek::fusion::Model::t _inst) { return _get_impl(_inst.get()); }
      p_Model(Model * _pubthis);
      virtual ~p_Model() { /* std::cout << "~p_Model" << std::endl;*/ };
      monty::rc_ptr< ::mosek::fusion::WorkStack > xs{};
      monty::rc_ptr< ::mosek::fusion::WorkStack > ws{};
      monty::rc_ptr< ::mosek::fusion::WorkStack > rs{};
      monty::rc_ptr< ::mosek::fusion::SolutionStruct > sol_itg{};
      monty::rc_ptr< ::mosek::fusion::SolutionStruct > sol_bas{};
      monty::rc_ptr< ::mosek::fusion::SolutionStruct > sol_itr{};
      monty::rc_ptr< ::mosek::fusion::Utils::StringIntMap > con_map{};
      std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::ModelConstraint >,1 > > acons{};
      std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::ModelConstraint >,1 > > cons{};
      int64_t task_numaferow{};
      std::shared_ptr< monty::ndarray< double,1 > > param_value{};
      int32_t param_num{};
      monty::rc_ptr< ::mosek::fusion::Utils::StringIntMap > par_map{};
      int32_t numparameter{};
      std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::Parameter >,1 > > parameters{};
      std::shared_ptr< monty::ndarray< bool,1 > > initsol_xx_flag{};
      std::shared_ptr< monty::ndarray< double,1 > > initsol_xx{};
      monty::rc_ptr< ::mosek::fusion::Utils::StringIntMap > var_map{};
      std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::ModelVariable >,1 > > barvars{};
      std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::ModelVariable >,1 > > vars{};
      int32_t bfixidx{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > barvar_block_elm_j{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > barvar_block_elm_i{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > barvar_block_elm_barj{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > barvar_block_elm_ptr{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > barvar_block_dim{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > barvar_block_ptr{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > barvar_dim{};
      int32_t barvar_num{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > var_elm_acc_ofs{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > var_elm_acc_idx{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > var_block_acc_id{};
      monty::rc_ptr< ::mosek::fusion::LinkedBlocks > var_block_map{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > acon_elm_afe{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > acon_elm_ofs{};
      std::shared_ptr< monty::ndarray< double,1 > > acon_elm_scale{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > acon_elm_accid{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > acon_afe{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > acon_acc{};
      monty::rc_ptr< ::mosek::fusion::LinkedBlocks > acon_block_map{};
      monty::rc_ptr< ::mosek::fusion::LinkedBlocks > acc_block_map{};
      monty::rc_ptr< ::mosek::fusion::RowBlockManager > obj_blocks{};
      monty::rc_ptr< ::mosek::fusion::RowBlockManager > afe_blocks{};
      monty::rc_ptr< ::mosek::fusion::RowBlockManager > con_blocks{};
      int32_t num_task_acc{};
      int32_t num_task_afe{};
      int32_t num_task_con{};
      mosek::fusion::SolutionType solutionptr{};
      mosek::fusion::AccSolutionStatus acceptable_sol{};
      std::string model_name{};

      virtual void destroy();

      static Model::t _new_Model(monty::rc_ptr< ::mosek::fusion::Model > _659_m);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Model > _659_m);
      static Model::t _new_Model(const std::string &  _666_name,int32_t _667_basesize);
      void _initialize(const std::string &  _666_name,int32_t _667_basesize);
      static Model::t _new_Model(int32_t _675_basesize);
      void _initialize(int32_t _675_basesize);
      static Model::t _new_Model(const std::string &  _676_name);
      void _initialize(const std::string &  _676_name);
      static Model::t _new_Model();
      void _initialize();
      virtual monty::rc_ptr< ::mosek::fusion::Disjunction > __mosek_2fusion_2Model__disjunction(const std::string &  _677_name,std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::Term >,1 > > _678_terms) ;
      virtual monty::rc_ptr< ::mosek::fusion::Disjunction > __mosek_2fusion_2Model__disjunction(std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::Term >,1 > > _723_terms) ;
      virtual monty::rc_ptr< ::mosek::fusion::Disjunction > __mosek_2fusion_2Model__disjunction(monty::rc_ptr< ::mosek::fusion::Term > _724_t1,monty::rc_ptr< ::mosek::fusion::Term > _725_t2,monty::rc_ptr< ::mosek::fusion::Term > _726_t3) ;
      virtual monty::rc_ptr< ::mosek::fusion::Disjunction > __mosek_2fusion_2Model__disjunction(monty::rc_ptr< ::mosek::fusion::Term > _727_t1,monty::rc_ptr< ::mosek::fusion::Term > _728_t2) ;
      virtual monty::rc_ptr< ::mosek::fusion::Disjunction > __mosek_2fusion_2Model__disjunction(monty::rc_ptr< ::mosek::fusion::Term > _729_t1) ;
      virtual monty::rc_ptr< ::mosek::fusion::Disjunction > __mosek_2fusion_2Model__disjunction(const std::string &  _730_name,monty::rc_ptr< ::mosek::fusion::Term > _731_t1,monty::rc_ptr< ::mosek::fusion::Term > _732_t2,monty::rc_ptr< ::mosek::fusion::Term > _733_t3) ;
      virtual monty::rc_ptr< ::mosek::fusion::Disjunction > __mosek_2fusion_2Model__disjunction(const std::string &  _734_name,monty::rc_ptr< ::mosek::fusion::Term > _735_t1,monty::rc_ptr< ::mosek::fusion::Term > _736_t2) ;
      virtual monty::rc_ptr< ::mosek::fusion::Disjunction > __mosek_2fusion_2Model__disjunction(const std::string &  _737_name,monty::rc_ptr< ::mosek::fusion::Term > _738_t1) ;
      virtual monty::rc_ptr< ::mosek::fusion::Utils::StringBuffer > __mosek_2fusion_2Model__formstConstr(monty::rc_ptr< ::mosek::fusion::Utils::StringBuffer > _739_sb,std::shared_ptr< monty::ndarray< int32_t,1 > > _740_shape,std::shared_ptr< monty::ndarray< int32_t,1 > > _741_idxs) ;
      virtual void acon_release(int32_t _742_id) ;
      virtual int32_t acon_allocate(int64_t _750_domidx,int32_t _751_conesize,int32_t _752_numcone,std::shared_ptr< monty::ndarray< double,1 > > _753_g,std::shared_ptr< monty::ndarray< int32_t,1 > > _754_afeidxs,std::shared_ptr< monty::ndarray< int32_t,1 > > _755_accidxs) ;
      virtual void afe_release(int32_t _781_id) ;
      virtual int32_t afe_allocate(std::shared_ptr< monty::ndarray< int32_t,1 > > _784_nativeidxs) ;
      virtual void con_release(int32_t _790_id) ;
      virtual int32_t con_allocate(std::shared_ptr< monty::ndarray< int32_t,1 > > _793_nativeidxs) ;
      virtual int32_t barvar_alloc(int32_t _801_conedim,int32_t _802_numcone,std::shared_ptr< monty::ndarray< int32_t,1 > > _803_barvaridxs,std::shared_ptr< monty::ndarray< int64_t,1 > > _804_nativeidxs) ;
      virtual int32_t conicvar_alloc(int64_t _835_domidx,int32_t _836_conesize,int32_t _837_numcone,std::shared_ptr< monty::ndarray< int32_t,1 > > _838_accidxs,std::shared_ptr< monty::ndarray< int32_t,1 > > _839_nativeidxs) ;
      virtual int32_t linearvar_alloc(int32_t _851_n,std::shared_ptr< monty::ndarray< int32_t,1 > > _852_nativeidxs) ;
      virtual void make_continuous(std::shared_ptr< monty::ndarray< int64_t,1 > > _860_idxs) ;
      virtual void make_integer(std::shared_ptr< monty::ndarray< int64_t,1 > > _866_idxs) ;
      static  void putlicensewait(bool _872_wait);
      static  void putlicensepath(const std::string &  _873_licfile);
      static  void putlicensecode(std::shared_ptr< monty::ndarray< int32_t,1 > > _874_code);
      virtual /* override */ void dispose() ;
      virtual MSKtask_t __mosek_2fusion_2Model__getTask() ;
      virtual void getConstraintDuals(bool _879_lower,std::shared_ptr< monty::ndarray< int32_t,1 > > _880_nativeidxs,std::shared_ptr< monty::ndarray< double,1 > > _881_res,int32_t _882_offset) ;
      virtual void getConstraintValues(bool _887_primal,std::shared_ptr< monty::ndarray< int32_t,1 > > _888_nativeidxs,std::shared_ptr< monty::ndarray< double,1 > > _889_res,int32_t _890_offset) ;
      virtual void getVariableDuals(bool _902_lower,std::shared_ptr< monty::ndarray< int64_t,1 > > _903_nativeidxs,std::shared_ptr< monty::ndarray< double,1 > > _904_res,int32_t _905_offset) ;
      virtual void getVariableValues(bool _911_primal,std::shared_ptr< monty::ndarray< int64_t,1 > > _912_nativeidxs,std::shared_ptr< monty::ndarray< double,1 > > _913_res,int32_t _914_offset) ;
      virtual void setVariableValues(bool _926_primal,std::shared_ptr< monty::ndarray< int64_t,1 > > _927_nativeidxs,std::shared_ptr< monty::ndarray< double,1 > > _928_values) ;
      virtual void flushNames() ;
      virtual void writeTaskNoFlush(const std::string &  _939_filename) ;
      virtual void writeTaskStream(const std::string &  _940_ext,std::ostream&  _941_stream) ;
      virtual void writeTask(const std::string &  _942_filename) ;
      virtual int64_t getSolverLIntInfo(const std::string &  _943_name) ;
      virtual int32_t getSolverIntInfo(const std::string &  _944_name) ;
      virtual double getSolverDoubleInfo(const std::string &  _945_name) ;
      virtual void setCallbackHandler(mosek::cbhandler_t  _946_h) ;
      virtual void setDataCallbackHandler(mosek::datacbhandler_t  _947_h) ;
      virtual void setLogHandler(mosek::msghandler_t  _948_h) ;
      virtual void setSolverParam(const std::string &  _949_name,double _950_floatval) ;
      virtual void setSolverParam(const std::string &  _951_name,int32_t _952_intval) ;
      virtual void setSolverParam(const std::string &  _953_name,const std::string &  _954_strval) ;
      virtual void breakSolver() ;
      virtual void optserverHost(const std::string &  _955_addr) ;
      virtual /* override */ void report_solution(mosek::fusion::SolutionType _956_soltype,mosek::fusion::ProblemStatus _957_prosta,mosek::fusion::SolutionStatus _958_psolsta,mosek::fusion::SolutionStatus _959_dsolsta,double _960_pobj,double _961_dobj,int32_t _962_numvar,int32_t _963_numcon,int32_t _964_numbarelm,int32_t _965_numacc,int32_t _966_numaccelm,bool _967_hasprimal,bool _968_hasdual) ;
      virtual /* override */ void clear_solutions() ;
      static  std::shared_ptr< monty::ndarray< mosek::fusion::SolverStatus,1 > > solveBatch(bool _978_israce,double _979_maxtime,int32_t _980_numthreads,std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::Model >,1 > > _981_models);
      virtual void solve(const std::string &  _987_addr,const std::string &  _988_accesstoken) ;
      virtual void solve() ;
      virtual void flush_parameters() ;
      virtual void flushParameters() ;
      virtual void evaluate_parameterized(monty::rc_ptr< ::mosek::fusion::WorkStack > _1001_xs,int32_t _1002_numrow,std::shared_ptr< monty::ndarray< int32_t,1 > > _1003_rowptrb,std::shared_ptr< monty::ndarray< int32_t,1 > > _1004_rowptre,std::shared_ptr< monty::ndarray< int64_t,1 > > _1005_codenidx,std::shared_ptr< monty::ndarray< int32_t,1 > > _1006_codeptr,std::shared_ptr< monty::ndarray< int32_t,1 > > _1007_codesizes,std::shared_ptr< monty::ndarray< int32_t,1 > > _1008_code,std::shared_ptr< monty::ndarray< double,1 > > _1009_cconst,std::shared_ptr< monty::ndarray< int32_t,1 > > _1010_subj,std::shared_ptr< monty::ndarray< double,1 > > _1011_val) ;
      virtual void flushSolutions() ;
      virtual void flush_initsol(mosek::fusion::SolutionType _1022_which) ;
      virtual mosek::fusion::SolutionStatus getDualSolutionStatus() ;
      virtual mosek::fusion::ProblemStatus getProblemStatus() ;
      virtual mosek::fusion::SolutionStatus getPrimalSolutionStatus() ;
      virtual double dualObjValue() ;
      virtual double primalObjValue() ;
      virtual monty::rc_ptr< ::mosek::fusion::SolutionStruct > __mosek_2fusion_2Model__get_sol_cache(mosek::fusion::SolutionType _1029_which_,bool _1030_primal,bool _1031_nothrow) ;
      virtual monty::rc_ptr< ::mosek::fusion::SolutionStruct > __mosek_2fusion_2Model__get_sol_cache(mosek::fusion::SolutionType _1037_which_,bool _1038_primal) ;
      virtual void setSolution_xx(std::shared_ptr< monty::ndarray< int32_t,1 > > _1039_subj,std::shared_ptr< monty::ndarray< double,1 > > _1040_val) ;
      virtual void ensure_initsol_xx() ;
      virtual std::shared_ptr< monty::ndarray< int32_t,1 > > getSolution_accptr(mosek::fusion::SolutionType _1047_which) ;
      virtual std::shared_ptr< monty::ndarray< double,1 > > getSolution_accy(mosek::fusion::SolutionType _1048_which) ;
      virtual std::shared_ptr< monty::ndarray< double,1 > > getSolution_accx(mosek::fusion::SolutionType _1049_which) ;
      virtual std::shared_ptr< monty::ndarray< double,1 > > getSolution_bars(mosek::fusion::SolutionType _1050_which) ;
      virtual std::shared_ptr< monty::ndarray< double,1 > > getSolution_barx(mosek::fusion::SolutionType _1051_which) ;
      virtual std::shared_ptr< monty::ndarray< double,1 > > getSolution_y(mosek::fusion::SolutionType _1052_which) ;
      virtual std::shared_ptr< monty::ndarray< double,1 > > getSolution_xc(mosek::fusion::SolutionType _1053_which) ;
      virtual std::shared_ptr< monty::ndarray< double,1 > > getSolution_suc(mosek::fusion::SolutionType _1054_which) ;
      virtual std::shared_ptr< monty::ndarray< double,1 > > getSolution_slc(mosek::fusion::SolutionType _1055_which) ;
      virtual std::shared_ptr< monty::ndarray< double,1 > > getSolution_sux(mosek::fusion::SolutionType _1056_which) ;
      virtual std::shared_ptr< monty::ndarray< double,1 > > getSolution_slx(mosek::fusion::SolutionType _1057_which) ;
      virtual std::shared_ptr< monty::ndarray< double,1 > > getSolution_yx(mosek::fusion::SolutionType _1058_which) ;
      virtual std::shared_ptr< monty::ndarray< double,1 > > getSolution_xx(mosek::fusion::SolutionType _1059_which) ;
      virtual void selectedSolution(mosek::fusion::SolutionType _1060_soltype) ;
      virtual mosek::fusion::AccSolutionStatus getAcceptedSolutionStatus() ;
      virtual void acceptedSolutionStatus(mosek::fusion::AccSolutionStatus _1061_what) ;
      virtual mosek::fusion::ProblemStatus getProblemStatus(mosek::fusion::SolutionType _1062_which) ;
      virtual mosek::fusion::SolutionStatus getDualSolutionStatus(mosek::fusion::SolutionType _1064_which) ;
      virtual mosek::fusion::SolutionStatus getPrimalSolutionStatus(mosek::fusion::SolutionType _1065_which) ;
      virtual mosek::fusion::SolutionStatus getSolutionStatus(mosek::fusion::SolutionType _1066_which,bool _1067_primal) ;
      virtual void update(std::shared_ptr< monty::ndarray< int32_t,1 > > _1070_conidxs,monty::rc_ptr< ::mosek::fusion::Expression > _1071_expr) ;
      virtual void update(std::shared_ptr< monty::ndarray< int32_t,1 > > _1138_conidxs,monty::rc_ptr< ::mosek::fusion::Expression > _1139_expr,std::shared_ptr< monty::ndarray< int32_t,1 > > _1140_varidxs) ;
      virtual void updateObjective(monty::rc_ptr< ::mosek::fusion::Expression > _1242_expr,monty::rc_ptr< ::mosek::fusion::Variable > _1243_x) ;
      virtual monty::rc_ptr< ::mosek::fusion::Parameter > __mosek_2fusion_2Model__parameter_unchecked(const std::string &  _1280_name,std::shared_ptr< monty::ndarray< int32_t,1 > > _1281_shape,std::shared_ptr< monty::ndarray< int64_t,1 > > _1282_sp) ;
      virtual monty::rc_ptr< ::mosek::fusion::Parameter > __mosek_2fusion_2Model__parameter_(const std::string &  _1292_name,std::shared_ptr< monty::ndarray< int32_t,1 > > _1293_shape,std::shared_ptr< monty::ndarray< int64_t,1 > > _1294_sp) ;
      virtual monty::rc_ptr< ::mosek::fusion::Parameter > __mosek_2fusion_2Model__parameter_(const std::string &  _1299_name,std::shared_ptr< monty::ndarray< int32_t,1 > > _1300_shape,std::shared_ptr< monty::ndarray< int32_t,2 > > _1301_sparsity) ;
      virtual monty::rc_ptr< ::mosek::fusion::Parameter > __mosek_2fusion_2Model__parameter(const std::string &  _1309_name) ;
      virtual monty::rc_ptr< ::mosek::fusion::Parameter > __mosek_2fusion_2Model__parameter(const std::string &  _1311_name,int32_t _1312_d1,int32_t _1313_d2,int32_t _1314_d3) ;
      virtual monty::rc_ptr< ::mosek::fusion::Parameter > __mosek_2fusion_2Model__parameter(const std::string &  _1316_name,int32_t _1317_d1,int32_t _1318_d2) ;
      virtual monty::rc_ptr< ::mosek::fusion::Parameter > __mosek_2fusion_2Model__parameter(const std::string &  _1320_name,int32_t _1321_d1) ;
      virtual monty::rc_ptr< ::mosek::fusion::Parameter > __mosek_2fusion_2Model__parameter(const std::string &  _1323_name,std::shared_ptr< monty::ndarray< int32_t,1 > > _1324_shape) ;
      virtual monty::rc_ptr< ::mosek::fusion::Parameter > __mosek_2fusion_2Model__parameter(const std::string &  _1326_name,std::shared_ptr< monty::ndarray< int32_t,1 > > _1327_shape,std::shared_ptr< monty::ndarray< int64_t,1 > > _1328_sp) ;
      virtual monty::rc_ptr< ::mosek::fusion::Parameter > __mosek_2fusion_2Model__parameter(const std::string &  _1329_name,std::shared_ptr< monty::ndarray< int32_t,1 > > _1330_shape,std::shared_ptr< monty::ndarray< int32_t,2 > > _1331_sparsity) ;
      virtual monty::rc_ptr< ::mosek::fusion::Parameter > __mosek_2fusion_2Model__parameter() ;
      virtual monty::rc_ptr< ::mosek::fusion::Parameter > __mosek_2fusion_2Model__parameter(int32_t _1333_d1,int32_t _1334_d2,int32_t _1335_d3) ;
      virtual monty::rc_ptr< ::mosek::fusion::Parameter > __mosek_2fusion_2Model__parameter(int32_t _1337_d1,int32_t _1338_d2) ;
      virtual monty::rc_ptr< ::mosek::fusion::Parameter > __mosek_2fusion_2Model__parameter(int32_t _1340_d1) ;
      virtual monty::rc_ptr< ::mosek::fusion::Parameter > __mosek_2fusion_2Model__parameter(std::shared_ptr< monty::ndarray< int32_t,1 > > _1342_shape) ;
      virtual monty::rc_ptr< ::mosek::fusion::Parameter > __mosek_2fusion_2Model__parameter(std::shared_ptr< monty::ndarray< int32_t,1 > > _1344_shape,std::shared_ptr< monty::ndarray< int64_t,1 > > _1345_sp) ;
      virtual monty::rc_ptr< ::mosek::fusion::Parameter > __mosek_2fusion_2Model__parameter(std::shared_ptr< monty::ndarray< int32_t,1 > > _1346_shape,std::shared_ptr< monty::ndarray< int32_t,2 > > _1347_sparsity) ;
      virtual void objective_(const std::string &  _1348_name,mosek::fusion::ObjectiveSense _1349_sense,monty::rc_ptr< ::mosek::fusion::Expression > _1350_expr) ;
      virtual void objective(double _1384_c) ;
      virtual void objective(mosek::fusion::ObjectiveSense _1385_sense,double _1386_c) ;
      virtual void objective(mosek::fusion::ObjectiveSense _1387_sense,monty::rc_ptr< ::mosek::fusion::Expression > _1388_expr) ;
      virtual void objective(const std::string &  _1389_name,double _1390_c) ;
      virtual void objective(const std::string &  _1391_name,mosek::fusion::ObjectiveSense _1392_sense,double _1393_c) ;
      virtual void objective(const std::string &  _1394_name,mosek::fusion::ObjectiveSense _1395_sense,monty::rc_ptr< ::mosek::fusion::Expression > _1396_expr) ;
      virtual monty::rc_ptr< ::mosek::fusion::Constraint > __mosek_2fusion_2Model__constraint(monty::rc_ptr< ::mosek::fusion::Expression > _1397_expr,monty::rc_ptr< ::mosek::fusion::ConeDomain > _1398_qdom) ;
      virtual monty::rc_ptr< ::mosek::fusion::Constraint > __mosek_2fusion_2Model__constraint(const std::string &  _1399_name,monty::rc_ptr< ::mosek::fusion::Expression > _1400_expr,monty::rc_ptr< ::mosek::fusion::ConeDomain > _1401_qdom) ;
      virtual monty::rc_ptr< ::mosek::fusion::RangedConstraint > __mosek_2fusion_2Model__constraint(monty::rc_ptr< ::mosek::fusion::Expression > _1402_expr,monty::rc_ptr< ::mosek::fusion::RangeDomain > _1403_rdom) ;
      virtual monty::rc_ptr< ::mosek::fusion::RangedConstraint > __mosek_2fusion_2Model__constraint(const std::string &  _1404_name,monty::rc_ptr< ::mosek::fusion::Expression > _1405_expr,monty::rc_ptr< ::mosek::fusion::RangeDomain > _1406_rdom) ;
      virtual monty::rc_ptr< ::mosek::fusion::Constraint > __mosek_2fusion_2Model__constraint(monty::rc_ptr< ::mosek::fusion::Expression > _1407_expr,monty::rc_ptr< ::mosek::fusion::LinearDomain > _1408_ldom) ;
      virtual monty::rc_ptr< ::mosek::fusion::Constraint > __mosek_2fusion_2Model__constraint(const std::string &  _1409_name,monty::rc_ptr< ::mosek::fusion::Expression > _1410_expr,monty::rc_ptr< ::mosek::fusion::LinearDomain > _1411_ldom) ;
      virtual monty::rc_ptr< ::mosek::fusion::Constraint > __mosek_2fusion_2Model__constraint(monty::rc_ptr< ::mosek::fusion::Expression > _1412_expr,monty::rc_ptr< ::mosek::fusion::PSDDomain > _1413_psddom) ;
      virtual monty::rc_ptr< ::mosek::fusion::Constraint > __mosek_2fusion_2Model__constraint(const std::string &  _1414_name,monty::rc_ptr< ::mosek::fusion::Expression > _1415_expr,monty::rc_ptr< ::mosek::fusion::PSDDomain > _1416_psddom) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Model__variable(monty::rc_ptr< ::mosek::fusion::PSDDomain > _1417_psddom) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Model__variable(int32_t _1418_n,int32_t _1419_m,monty::rc_ptr< ::mosek::fusion::PSDDomain > _1420_psddom) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Model__variable(int32_t _1421_n,monty::rc_ptr< ::mosek::fusion::PSDDomain > _1422_psddom) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Model__variable(const std::string &  _1423_name,monty::rc_ptr< ::mosek::fusion::PSDDomain > _1424_psddom) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Model__variable(const std::string &  _1425_name,int32_t _1426_n,int32_t _1427_m,monty::rc_ptr< ::mosek::fusion::PSDDomain > _1428_psddom) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Model__variable(const std::string &  _1429_name,int32_t _1430_n,monty::rc_ptr< ::mosek::fusion::PSDDomain > _1431_psddom) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Model__variable(const std::string &  _1432_name,std::shared_ptr< monty::ndarray< int32_t,1 > > _1433_shp,monty::rc_ptr< ::mosek::fusion::PSDDomain > _1434_psddom) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Model__variable(monty::rc_ptr< ::mosek::fusion::ConeDomain > _1435_qdom) ;
      virtual monty::rc_ptr< ::mosek::fusion::RangedVariable > __mosek_2fusion_2Model__variable(monty::rc_ptr< ::mosek::fusion::RangeDomain > _1436_rdom) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Model__variable(monty::rc_ptr< ::mosek::fusion::LinearDomain > _1437_ldom) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Model__variable(std::shared_ptr< monty::ndarray< int32_t,1 > > _1438_shp,monty::rc_ptr< ::mosek::fusion::ConeDomain > _1439_qdom) ;
      virtual monty::rc_ptr< ::mosek::fusion::RangedVariable > __mosek_2fusion_2Model__variable(std::shared_ptr< monty::ndarray< int32_t,1 > > _1440_shp,monty::rc_ptr< ::mosek::fusion::RangeDomain > _1441_rdom) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Model__variable(std::shared_ptr< monty::ndarray< int32_t,1 > > _1442_shp,monty::rc_ptr< ::mosek::fusion::LinearDomain > _1443_ldom) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Model__variable(std::shared_ptr< monty::ndarray< int32_t,1 > > _1444_shp) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Model__variable(int32_t _1445_size,monty::rc_ptr< ::mosek::fusion::ConeDomain > _1446_qdom) ;
      virtual monty::rc_ptr< ::mosek::fusion::RangedVariable > __mosek_2fusion_2Model__variable(int32_t _1447_size,monty::rc_ptr< ::mosek::fusion::RangeDomain > _1448_rdom) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Model__variable(int32_t _1449_size,monty::rc_ptr< ::mosek::fusion::LinearDomain > _1450_ldom) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Model__variable(int32_t _1451_size) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Model__variable() ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Model__variable(const std::string &  _1452_name,monty::rc_ptr< ::mosek::fusion::ConeDomain > _1453_qdom) ;
      virtual monty::rc_ptr< ::mosek::fusion::RangedVariable > __mosek_2fusion_2Model__variable(const std::string &  _1454_name,monty::rc_ptr< ::mosek::fusion::RangeDomain > _1455_rdom) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Model__variable(const std::string &  _1456_name,monty::rc_ptr< ::mosek::fusion::LinearDomain > _1457_ldom) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Model__variable(const std::string &  _1458_name,std::shared_ptr< monty::ndarray< int32_t,1 > > _1459_shp,monty::rc_ptr< ::mosek::fusion::ConeDomain > _1460_qdom) ;
      virtual monty::rc_ptr< ::mosek::fusion::RangedVariable > __mosek_2fusion_2Model__variable(const std::string &  _1461_name,std::shared_ptr< monty::ndarray< int32_t,1 > > _1462_shp,monty::rc_ptr< ::mosek::fusion::RangeDomain > _1463_rdom) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Model__variable(const std::string &  _1464_name,std::shared_ptr< monty::ndarray< int32_t,1 > > _1465_shp,monty::rc_ptr< ::mosek::fusion::LinearDomain > _1466_ldom) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Model__variable(const std::string &  _1467_name,std::shared_ptr< monty::ndarray< int32_t,1 > > _1468_shp) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Model__variable(const std::string &  _1469_name,int32_t _1470_size,monty::rc_ptr< ::mosek::fusion::ConeDomain > _1471_qdom) ;
      virtual monty::rc_ptr< ::mosek::fusion::RangedVariable > __mosek_2fusion_2Model__variable(const std::string &  _1472_name,int32_t _1473_size,monty::rc_ptr< ::mosek::fusion::RangeDomain > _1474_rdom) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Model__variable(const std::string &  _1475_name,int32_t _1476_size,monty::rc_ptr< ::mosek::fusion::LinearDomain > _1477_ldom) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Model__variable(const std::string &  _1478_name,int32_t _1479_size) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Model__variable(const std::string &  _1480_name) ;
      virtual void removeConstraintBlock(int32_t _1481_conid) ;
      virtual void removeVariableBlock(int64_t _1482_varid64) ;
      virtual monty::rc_ptr< ::mosek::fusion::RangedVariable > __mosek_2fusion_2Model__ranged_variable(const std::string &  _1487_name,std::shared_ptr< monty::ndarray< int32_t,1 > > _1488_shp,monty::rc_ptr< ::mosek::fusion::RangeDomain > _1489_dom) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Model__variable_(const std::string &  _1510_name,std::shared_ptr< monty::ndarray< int32_t,1 > > _1511_shp,monty::rc_ptr< ::mosek::fusion::ConeDomain > _1512_dom) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Model__variable_(const std::string &  _1549_name,std::shared_ptr< monty::ndarray< int32_t,1 > > _1550_shp,monty::rc_ptr< ::mosek::fusion::LinearDomain > _1551_dom) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Model__variable_(const std::string &  _1609_name,std::shared_ptr< monty::ndarray< int32_t,1 > > _1610_shp,monty::rc_ptr< ::mosek::fusion::PSDDomain > _1611_dom) ;
      virtual void putfrows(std::shared_ptr< monty::ndarray< int32_t,1 > > _1639_nativeidxs,int32_t _1640_nativebaseptr,monty::rc_ptr< ::mosek::fusion::WorkStack > _1641_rs,int32_t _1642_nelem,int32_t _1643_nnz,int32_t _1644_ptr_base,int32_t _1645_nidxs_base,int32_t _1646_cof_base) ;
      virtual void putarows(std::shared_ptr< monty::ndarray< int32_t,1 > > _1686_nativeidxs,monty::rc_ptr< ::mosek::fusion::WorkStack > _1687_rs,int32_t _1688_nelem,int32_t _1689_nnz,int32_t _1690_ptr_base,int32_t _1691_nidxs_base,int32_t _1692_cof_base) ;
      virtual monty::rc_ptr< ::mosek::fusion::RangedConstraint > __mosek_2fusion_2Model__constraint_(const std::string &  _1729_name,monty::rc_ptr< ::mosek::fusion::Expression > _1730_expr,monty::rc_ptr< ::mosek::fusion::RangeDomain > _1731_dom) ;
      virtual monty::rc_ptr< ::mosek::fusion::Constraint > __mosek_2fusion_2Model__constraint_(const std::string &  _1773_name,monty::rc_ptr< ::mosek::fusion::Expression > _1774_expr,monty::rc_ptr< ::mosek::fusion::PSDDomain > _1775_dom) ;
      virtual monty::rc_ptr< ::mosek::fusion::Constraint > __mosek_2fusion_2Model__constraint_(const std::string &  _1868_name,monty::rc_ptr< ::mosek::fusion::Expression > _1869_expr,monty::rc_ptr< ::mosek::fusion::ConeDomain > _1870_dom) ;
      virtual monty::rc_ptr< ::mosek::fusion::Constraint > __mosek_2fusion_2Model__constraint_(const std::string &  _1926_name,monty::rc_ptr< ::mosek::fusion::Expression > _1927_expr,monty::rc_ptr< ::mosek::fusion::LinearDomain > _1928_dom) ;
      static  std::string getVersion();
      virtual bool hasParameter(const std::string &  _1966_name) ;
      virtual bool hasConstraint(const std::string &  _1967_name) ;
      virtual bool hasVariable(const std::string &  _1968_name) ;
      virtual monty::rc_ptr< ::mosek::fusion::Parameter > __mosek_2fusion_2Model__getParameter(const std::string &  _1969_name) ;
      virtual monty::rc_ptr< ::mosek::fusion::Constraint > __mosek_2fusion_2Model__getConstraint(int32_t _1970_index) ;
      virtual monty::rc_ptr< ::mosek::fusion::Constraint > __mosek_2fusion_2Model__getConstraint(const std::string &  _1972_name) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Model__getVariable(int32_t _1975_index) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Model__getVariable(const std::string &  _1976_name) ;
      virtual std::string getName() ;
      virtual std::shared_ptr< monty::ndarray< double,1 > > getParameterValue(std::shared_ptr< monty::ndarray< int32_t,1 > > _1978_idxs) ;
      virtual void setParameterValue(std::shared_ptr< monty::ndarray< int32_t,1 > > _1981_idxs,std::shared_ptr< monty::ndarray< double,1 > > _1982_vals) ;
      virtual monty::rc_ptr< ::mosek::fusion::Model > __mosek_2fusion_2Model__clone() ;
    }; // struct Model;

    // mosek.fusion.Debug from file 'src/fusion/cxx/Debug_p.h'
    // namespace mosek::fusion
    struct p_Debug
    {
      Debug * _pubthis;
    
      p_Debug(Debug * _pubthis) : _pubthis(_pubthis) {}
    
      static Debug::t o ()                 { return monty::rc_ptr<Debug>(new Debug()); }
      Debug::t p (const std::string & val) { std::cout << val; return Debug::t(_pubthis); }
      Debug::t p (      int val)           { std::cout << val; return Debug::t(_pubthis); }
      Debug::t p (int64_t val)           { std::cout << val; return Debug::t(_pubthis); }
      Debug::t p (   double val)           { std::cout << val; return Debug::t(_pubthis); }
      Debug::t p (     bool val)           { std::cout << val; return Debug::t(_pubthis); }
      Debug::t lf()                        { std::cout << std::endl; return Debug::t(_pubthis); }
    
      static p_Debug * _get_impl(Debug * _inst) { return _inst->ptr; }
    
      template<typename T>
      Debug::t p(const std::shared_ptr<monty::ndarray<T,1>> & val)
      {
        if (val->size() > 0)
        {
          std::cout << (*val)[0];
          for (int i = 1; i < val->size(); ++i)
            std::cout << "," << (*val)[i];
        }
        return Debug::t(_pubthis);
      }
    
      Debug::t __mosek_2fusion_2Debug__p (const std::string & val) { std::cout << val; return Debug::t(_pubthis); }
    
      template<class C>
      Debug::t __mosek_2fusion_2Debug__p (C val) { std::cout << val; return Debug::t(_pubthis); }
      Debug::t __mosek_2fusion_2Debug__lf()      { std::cout << std::endl; return Debug::t(_pubthis); }
    
    };
    // End of file 'src/fusion/cxx/Debug_p.h'
    struct p_Sort
    {
      Sort * _pubthis;
      static mosek::fusion::p_Sort* _get_impl(mosek::fusion::Sort * _inst){ assert(_inst); assert(_inst->_impl); return _inst->_impl; }
      static mosek::fusion::p_Sort * _get_impl(mosek::fusion::Sort::t _inst) { return _get_impl(_inst.get()); }
      p_Sort(Sort * _pubthis);
      virtual ~p_Sort() { /* std::cout << "~p_Sort" << std::endl;*/ };

      virtual void destroy();

      static  void argTransposeSort(std::shared_ptr< monty::ndarray< int64_t,1 > > _265_perm,std::shared_ptr< monty::ndarray< int64_t,1 > > _266_ptrb,int32_t _267_m,int32_t _268_n,int32_t _269_p,std::shared_ptr< monty::ndarray< int64_t,1 > > _270_val);
      static  void argsort(std::shared_ptr< monty::ndarray< int64_t,1 > > _278_idx,std::shared_ptr< monty::ndarray< int64_t,1 > > _279_vals1);
      static  void argsort(std::shared_ptr< monty::ndarray< int64_t,1 > > _280_idx,std::shared_ptr< monty::ndarray< int32_t,1 > > _281_vals1);
      static  void argsort(std::shared_ptr< monty::ndarray< int64_t,1 > > _282_idx,std::shared_ptr< monty::ndarray< int64_t,1 > > _283_vals1,std::shared_ptr< monty::ndarray< int64_t,1 > > _284_vals2);
      static  void argsort(std::shared_ptr< monty::ndarray< int64_t,1 > > _285_idx,std::shared_ptr< monty::ndarray< int32_t,1 > > _286_vals1,std::shared_ptr< monty::ndarray< int32_t,1 > > _287_vals2);
      static  void argsort(std::shared_ptr< monty::ndarray< int64_t,1 > > _288_idx,std::shared_ptr< monty::ndarray< int64_t,1 > > _289_vals1,int64_t _290_first,int64_t _291_last);
      static  void argsort(std::shared_ptr< monty::ndarray< int64_t,1 > > _292_idx,std::shared_ptr< monty::ndarray< int32_t,1 > > _293_vals1,int64_t _294_first,int64_t _295_last);
      static  void argsort(std::shared_ptr< monty::ndarray< int64_t,1 > > _296_idx,std::shared_ptr< monty::ndarray< int64_t,1 > > _297_vals1,std::shared_ptr< monty::ndarray< int64_t,1 > > _298_vals2,int64_t _299_first,int64_t _300_last);
      static  void argsort(std::shared_ptr< monty::ndarray< int64_t,1 > > _301_idx,std::shared_ptr< monty::ndarray< int32_t,1 > > _302_vals1,std::shared_ptr< monty::ndarray< int32_t,1 > > _303_vals2,int64_t _304_first,int64_t _305_last);
      static  void argsort(std::shared_ptr< monty::ndarray< int64_t,1 > > _306_idx,std::shared_ptr< monty::ndarray< int64_t,1 > > _307_vals1,int64_t _308_first,int64_t _309_last,bool _310_check);
      static  void argsort(std::shared_ptr< monty::ndarray< int64_t,1 > > _313_idx,std::shared_ptr< monty::ndarray< int32_t,1 > > _314_vals1,int64_t _315_first,int64_t _316_last,bool _317_check);
      static  void argsort(std::shared_ptr< monty::ndarray< int64_t,1 > > _320_idx,std::shared_ptr< monty::ndarray< int64_t,1 > > _321_vals1,std::shared_ptr< monty::ndarray< int64_t,1 > > _322_vals2,int64_t _323_first,int64_t _324_last,bool _325_check);
      static  void argsort(std::shared_ptr< monty::ndarray< int64_t,1 > > _328_idx,std::shared_ptr< monty::ndarray< int32_t,1 > > _329_vals1,std::shared_ptr< monty::ndarray< int32_t,1 > > _330_vals2,int64_t _331_first,int64_t _332_last,bool _333_check);
      static  void argbucketsort(std::shared_ptr< monty::ndarray< int64_t,1 > > _336_idx,std::shared_ptr< monty::ndarray< int64_t,1 > > _337_vals,int64_t _338_first,int64_t _339_last,int64_t _340_minv,int64_t _341_maxv);
      static  void argbucketsort(std::shared_ptr< monty::ndarray< int64_t,1 > > _342_idx,std::shared_ptr< monty::ndarray< int32_t,1 > > _343_vals,int64_t _344_first,int64_t _345_last,int32_t _346_minv,int32_t _347_maxv);
      static  void getminmax(std::shared_ptr< monty::ndarray< int64_t,1 > > _348_idx,std::shared_ptr< monty::ndarray< int64_t,1 > > _349_vals1,std::shared_ptr< monty::ndarray< int64_t,1 > > _350_vals2,int64_t _351_first,int64_t _352_last,std::shared_ptr< monty::ndarray< int64_t,1 > > _353_res);
      static  void getminmax(std::shared_ptr< monty::ndarray< int64_t,1 > > _356_idx,std::shared_ptr< monty::ndarray< int32_t,1 > > _357_vals1,std::shared_ptr< monty::ndarray< int32_t,1 > > _358_vals2,int64_t _359_first,int64_t _360_last,std::shared_ptr< monty::ndarray< int32_t,1 > > _361_res);
      static  bool issorted(std::shared_ptr< monty::ndarray< int64_t,1 > > _364_idx,std::shared_ptr< monty::ndarray< int64_t,1 > > _365_vals1,int64_t _366_first,int64_t _367_last,bool _368_check);
      static  bool issorted(std::shared_ptr< monty::ndarray< int64_t,1 > > _370_idx,std::shared_ptr< monty::ndarray< int32_t,1 > > _371_vals1,int64_t _372_first,int64_t _373_last,bool _374_check);
      static  bool issorted(std::shared_ptr< monty::ndarray< int64_t,1 > > _376_idx,std::shared_ptr< monty::ndarray< int64_t,1 > > _377_vals1,std::shared_ptr< monty::ndarray< int64_t,1 > > _378_vals2,int64_t _379_first,int64_t _380_last,bool _381_check);
      static  bool issorted(std::shared_ptr< monty::ndarray< int64_t,1 > > _383_idx,std::shared_ptr< monty::ndarray< int32_t,1 > > _384_vals1,std::shared_ptr< monty::ndarray< int32_t,1 > > _385_vals2,int64_t _386_first,int64_t _387_last,bool _388_check);
    }; // struct Sort;

    struct p_IndexCounter
    {
      IndexCounter * _pubthis;
      static mosek::fusion::p_IndexCounter* _get_impl(mosek::fusion::IndexCounter * _inst){ assert(_inst); assert(_inst->_impl); return _inst->_impl; }
      static mosek::fusion::p_IndexCounter * _get_impl(mosek::fusion::IndexCounter::t _inst) { return _get_impl(_inst.get()); }
      p_IndexCounter(IndexCounter * _pubthis);
      virtual ~p_IndexCounter() { /* std::cout << "~p_IndexCounter" << std::endl;*/ };
      int64_t start{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > dims{};
      std::shared_ptr< monty::ndarray< int64_t,1 > > strides{};
      std::shared_ptr< monty::ndarray< int64_t,1 > > st{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > ii{};
      int32_t n{};

      virtual void destroy();

      static IndexCounter::t _new_IndexCounter(std::shared_ptr< monty::ndarray< int32_t,1 > > _390_shape);
      void _initialize(std::shared_ptr< monty::ndarray< int32_t,1 > > _390_shape);
      static IndexCounter::t _new_IndexCounter(int64_t _392_start_,std::shared_ptr< monty::ndarray< int32_t,1 > > _393_dims_,std::shared_ptr< monty::ndarray< int32_t,1 > > _394_shape);
      void _initialize(int64_t _392_start_,std::shared_ptr< monty::ndarray< int32_t,1 > > _393_dims_,std::shared_ptr< monty::ndarray< int32_t,1 > > _394_shape);
      static IndexCounter::t _new_IndexCounter(int64_t _397_start_,std::shared_ptr< monty::ndarray< int32_t,1 > > _398_dims_,std::shared_ptr< monty::ndarray< int64_t,1 > > _399_strides_);
      void _initialize(int64_t _397_start_,std::shared_ptr< monty::ndarray< int32_t,1 > > _398_dims_,std::shared_ptr< monty::ndarray< int64_t,1 > > _399_strides_);
      virtual bool atEnd() ;
      virtual std::shared_ptr< monty::ndarray< int32_t,1 > > getIndex() ;
      virtual int64_t next() ;
      virtual int64_t get() ;
      virtual void inc() ;
      virtual void reset() ;
    }; // struct IndexCounter;

    struct p_CommonTools
    {
      CommonTools * _pubthis;
      static mosek::fusion::p_CommonTools* _get_impl(mosek::fusion::CommonTools * _inst){ assert(_inst); assert(_inst->_impl); return _inst->_impl; }
      static mosek::fusion::p_CommonTools * _get_impl(mosek::fusion::CommonTools::t _inst) { return _get_impl(_inst.get()); }
      p_CommonTools(CommonTools * _pubthis);
      virtual ~p_CommonTools() { /* std::cout << "~p_CommonTools" << std::endl;*/ };

      virtual void destroy();

      static  std::shared_ptr< monty::ndarray< int64_t,1 > > resize(std::shared_ptr< monty::ndarray< int64_t,1 > > _405_values,int32_t _406_newsize);
      static  std::shared_ptr< monty::ndarray< int32_t,1 > > resize(std::shared_ptr< monty::ndarray< int32_t,1 > > _408_values,int32_t _409_newsize);
      static  std::shared_ptr< monty::ndarray< double,1 > > resize(std::shared_ptr< monty::ndarray< double,1 > > _411_values,int32_t _412_newsize);
      static  int32_t binarySearch(std::shared_ptr< monty::ndarray< int32_t,1 > > _414_values,int32_t _415_target);
      static  int32_t binarySearch(std::shared_ptr< monty::ndarray< int64_t,1 > > _419_values,int64_t _420_target);
      static  int32_t binarySearchR(std::shared_ptr< monty::ndarray< int64_t,1 > > _422_values,int64_t _423_target);
      static  int32_t binarySearchL(std::shared_ptr< monty::ndarray< int64_t,1 > > _427_values,int64_t _428_target);
      static  void ndIncr(std::shared_ptr< monty::ndarray< int32_t,1 > > _432_ndidx,std::shared_ptr< monty::ndarray< int32_t,1 > > _433_first,std::shared_ptr< monty::ndarray< int32_t,1 > > _434_last);
      static  void transposeTriplets(std::shared_ptr< monty::ndarray< int32_t,1 > > _436_subi,std::shared_ptr< monty::ndarray< int32_t,1 > > _437_subj,std::shared_ptr< monty::ndarray< double,1 > > _438_val,std::shared_ptr< monty::ndarray< std::shared_ptr< monty::ndarray< int64_t,1 > >,1 > > _439_tsubi_,std::shared_ptr< monty::ndarray< std::shared_ptr< monty::ndarray< int64_t,1 > >,1 > > _440_tsubj_,std::shared_ptr< monty::ndarray< std::shared_ptr< monty::ndarray< double,1 > >,1 > > _441_tval_,int64_t _442_nelm,int32_t _443_dimi,int32_t _444_dimj);
      static  void transposeTriplets(std::shared_ptr< monty::ndarray< int32_t,1 > > _457_subi,std::shared_ptr< monty::ndarray< int32_t,1 > > _458_subj,std::shared_ptr< monty::ndarray< double,1 > > _459_val,std::shared_ptr< monty::ndarray< std::shared_ptr< monty::ndarray< int32_t,1 > >,1 > > _460_tsubi_,std::shared_ptr< monty::ndarray< std::shared_ptr< monty::ndarray< int32_t,1 > >,1 > > _461_tsubj_,std::shared_ptr< monty::ndarray< std::shared_ptr< monty::ndarray< double,1 > >,1 > > _462_tval_,int64_t _463_nelm,int32_t _464_dimi,int32_t _465_dimj);
      static  void tripletSort(std::shared_ptr< monty::ndarray< int32_t,1 > > _478_subi,std::shared_ptr< monty::ndarray< int32_t,1 > > _479_subj,std::shared_ptr< monty::ndarray< double,1 > > _480_val,std::shared_ptr< monty::ndarray< std::shared_ptr< monty::ndarray< int32_t,1 > >,1 > > _481_tsubi_,std::shared_ptr< monty::ndarray< std::shared_ptr< monty::ndarray< int32_t,1 > >,1 > > _482_tsubj_,std::shared_ptr< monty::ndarray< std::shared_ptr< monty::ndarray< double,1 > >,1 > > _483_tval_,int64_t _484_nelm,int32_t _485_dimi,int32_t _486_dimj);
      static  void argMSort(std::shared_ptr< monty::ndarray< int32_t,1 > > _512_idx,std::shared_ptr< monty::ndarray< int32_t,1 > > _513_vals);
      static  void mergeInto(std::shared_ptr< monty::ndarray< int32_t,1 > > _518_src,std::shared_ptr< monty::ndarray< int32_t,1 > > _519_tgt,std::shared_ptr< monty::ndarray< int32_t,1 > > _520_vals,int32_t _521_si0,int32_t _522_si1_,int32_t _523_si2_);
      static  void argQsort(std::shared_ptr< monty::ndarray< int64_t,1 > > _529_idx,std::shared_ptr< monty::ndarray< int64_t,1 > > _530_vals1,std::shared_ptr< monty::ndarray< int64_t,1 > > _531_vals2,int64_t _532_first,int64_t _533_last);
      static  void argQsort(std::shared_ptr< monty::ndarray< int64_t,1 > > _534_idx,std::shared_ptr< monty::ndarray< int32_t,1 > > _535_vals1,std::shared_ptr< monty::ndarray< int32_t,1 > > _536_vals2,int64_t _537_first,int64_t _538_last);
    }; // struct CommonTools;

    struct p_SolutionStruct
    {
      SolutionStruct * _pubthis;
      static mosek::fusion::p_SolutionStruct* _get_impl(mosek::fusion::SolutionStruct * _inst){ assert(_inst); assert(_inst->_impl); return _inst->_impl; }
      static mosek::fusion::p_SolutionStruct * _get_impl(mosek::fusion::SolutionStruct::t _inst) { return _get_impl(_inst.get()); }
      p_SolutionStruct(SolutionStruct * _pubthis);
      virtual ~p_SolutionStruct() { /* std::cout << "~p_SolutionStruct" << std::endl;*/ };
      std::shared_ptr< monty::ndarray< double,1 > > accy{};
      std::shared_ptr< monty::ndarray< double,1 > > accx{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > accptr{};
      std::shared_ptr< monty::ndarray< double,1 > > yx{};
      std::shared_ptr< monty::ndarray< double,1 > > sux{};
      std::shared_ptr< monty::ndarray< double,1 > > slx{};
      std::shared_ptr< monty::ndarray< double,1 > > bars{};
      std::shared_ptr< monty::ndarray< double,1 > > barx{};
      std::shared_ptr< monty::ndarray< double,1 > > y{};
      std::shared_ptr< monty::ndarray< double,1 > > suc{};
      std::shared_ptr< monty::ndarray< double,1 > > slc{};
      std::shared_ptr< monty::ndarray< double,1 > > xx{};
      std::shared_ptr< monty::ndarray< double,1 > > xc{};
      double dobj{};
      double pobj{};
      mosek::fusion::ProblemStatus probstatus{};
      mosek::fusion::SolutionStatus dstatus{};
      mosek::fusion::SolutionStatus pstatus{};
      int32_t sol_numbarvar{};
      int32_t sol_numaccelm{};
      int32_t sol_numacc{};
      int32_t sol_numvar{};
      int32_t sol_numcon{};

      virtual void destroy();

      static SolutionStruct::t _new_SolutionStruct(int32_t _539_numvar,int32_t _540_numcon,int32_t _541_numbarvar,int32_t _542_numacc,int32_t _543_numaccelm);
      void _initialize(int32_t _539_numvar,int32_t _540_numcon,int32_t _541_numbarvar,int32_t _542_numacc,int32_t _543_numaccelm);
      static SolutionStruct::t _new_SolutionStruct(monty::rc_ptr< ::mosek::fusion::SolutionStruct > _544_that);
      void _initialize(monty::rc_ptr< ::mosek::fusion::SolutionStruct > _544_that);
      virtual monty::rc_ptr< ::mosek::fusion::SolutionStruct > __mosek_2fusion_2SolutionStruct__clone() ;
      virtual void resize(int32_t _545_numvar,int32_t _546_numcon,int32_t _547_numbarvar,int32_t _548_numacc,int32_t _549_numaccelm) ;
      virtual bool isDualAcceptable(mosek::fusion::AccSolutionStatus _570_acceptable_sol) ;
      virtual bool isPrimalAcceptable(mosek::fusion::AccSolutionStatus _571_acceptable_sol) ;
      virtual bool isAcceptable(mosek::fusion::SolutionStatus _572_stat,mosek::fusion::AccSolutionStatus _573_accstat) ;
    }; // struct SolutionStruct;

    struct p_RowBlockManager
    {
      RowBlockManager * _pubthis;
      static mosek::fusion::p_RowBlockManager* _get_impl(mosek::fusion::RowBlockManager * _inst){ assert(_inst); assert(_inst->_impl); return _inst->_impl; }
      static mosek::fusion::p_RowBlockManager * _get_impl(mosek::fusion::RowBlockManager::t _inst) { return _get_impl(_inst.get()); }
      p_RowBlockManager(RowBlockManager * _pubthis);
      virtual ~p_RowBlockManager() { /* std::cout << "~p_RowBlockManager" << std::endl;*/ };
      int32_t varidx_used{};
      int32_t code_used{};
      std::shared_ptr< monty::ndarray< double,1 > > cconst{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > code{};
      int32_t first_free_codeitem{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > param_code_sizes{};
      std::shared_ptr< monty::ndarray< int64_t,1 > > param_varidx{};
      int32_t first_free_entry{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > row_code_ptr{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > row_param_ptre{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > row_param_ptrb{};
      monty::rc_ptr< ::mosek::fusion::LinkedBlocks > blocks{};

      virtual void destroy();

      static RowBlockManager::t _new_RowBlockManager(monty::rc_ptr< ::mosek::fusion::RowBlockManager > _574_that);
      void _initialize(monty::rc_ptr< ::mosek::fusion::RowBlockManager > _574_that);
      static RowBlockManager::t _new_RowBlockManager();
      void _initialize();
      virtual int32_t num_parameterized() ;
      virtual bool is_parameterized() ;
      virtual int32_t blocksize(int32_t _575_id) ;
      virtual int32_t block_capacity() ;
      virtual int32_t capacity() ;
      virtual void get(int32_t _576_id,std::shared_ptr< monty::ndarray< int32_t,1 > > _577_target,int32_t _578_offset) ;
      virtual void evaluate(monty::rc_ptr< ::mosek::fusion::WorkStack > _579_xs,std::shared_ptr< monty::ndarray< double,1 > > _580_param_value,std::shared_ptr< monty::ndarray< int32_t,1 > > _581_subi,std::shared_ptr< monty::ndarray< int32_t,1 > > _582_subj,std::shared_ptr< monty::ndarray< double,1 > > _583_val) ;
      virtual void replace_row_code(monty::rc_ptr< ::mosek::fusion::WorkStack > _594_rs,std::shared_ptr< monty::ndarray< int32_t,1 > > _595_nativeidxs,int32_t _596_ptr,int32_t _597_nidxs,int32_t _598_codeptr,int32_t _599_code_p,int32_t _600_cconst_p) ;
      virtual void clear_row_code(std::shared_ptr< monty::ndarray< int32_t,1 > > _623_nativeidxs) ;
      virtual void compress() ;
      virtual void ensure_code_cap(int32_t _636_nentry,int32_t _637_codesize) ;
      virtual void release(int32_t _647_id,std::shared_ptr< monty::ndarray< int32_t,1 > > _648_nativeidxs) ;
      virtual int32_t allocate(std::shared_ptr< monty::ndarray< int32_t,1 > > _652_nativeidxs) ;
      virtual bool row_is_parameterized(int32_t _658_i) ;
    }; // struct RowBlockManager;

    struct p_BaseVariable : public /*implements*/ virtual ::mosek::fusion::Variable
    {
      BaseVariable * _pubthis;
      static mosek::fusion::p_BaseVariable* _get_impl(mosek::fusion::BaseVariable * _inst){ assert(_inst); assert(_inst->_impl); return _inst->_impl; }
      static mosek::fusion::p_BaseVariable * _get_impl(mosek::fusion::BaseVariable::t _inst) { return _get_impl(_inst.get()); }
      p_BaseVariable(BaseVariable * _pubthis);
      virtual ~p_BaseVariable() { /* std::cout << "~p_BaseVariable" << std::endl;*/ };
      std::shared_ptr< monty::ndarray< int64_t,1 > > sparsity{};
      std::shared_ptr< monty::ndarray< int64_t,1 > > nativeidxs{};
      monty::rc_ptr< ::mosek::fusion::Model > model{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > shape{};

      virtual void destroy();

      static BaseVariable::t _new_BaseVariable(monty::rc_ptr< ::mosek::fusion::BaseVariable > _2157_v,monty::rc_ptr< ::mosek::fusion::Model > _2158_m);
      void _initialize(monty::rc_ptr< ::mosek::fusion::BaseVariable > _2157_v,monty::rc_ptr< ::mosek::fusion::Model > _2158_m);
      static BaseVariable::t _new_BaseVariable(monty::rc_ptr< ::mosek::fusion::Model > _2159_m,std::shared_ptr< monty::ndarray< int32_t,1 > > _2160_shape,std::shared_ptr< monty::ndarray< int64_t,1 > > _2161_sparsity,std::shared_ptr< monty::ndarray< int64_t,1 > > _2162_nativeidxs);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Model > _2159_m,std::shared_ptr< monty::ndarray< int32_t,1 > > _2160_shape,std::shared_ptr< monty::ndarray< int64_t,1 > > _2161_sparsity,std::shared_ptr< monty::ndarray< int64_t,1 > > _2162_nativeidxs);
      virtual /* override */ std::string toString() ;
      virtual void eval(monty::rc_ptr< ::mosek::fusion::WorkStack > _2165_rs,monty::rc_ptr< ::mosek::fusion::WorkStack > _2166_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _2167_xs) ;
      virtual void remove() ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BaseVariable__fromTril(int32_t _2185_dim0,int32_t _2186_d) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BaseVariable__fromTril(int32_t _2219_d) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Variable__fromTril(int32_t _2219_d) { return __mosek_2fusion_2BaseVariable__fromTril(_2219_d); }
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BaseVariable__tril(int32_t _2220_dim1,int32_t _2221_dim2) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BaseVariable__tril() ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Variable__tril() { return __mosek_2fusion_2BaseVariable__tril(); }
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BaseVariable__reshape(int32_t _2275_dim0,int32_t _2276_dim1,int32_t _2277_dim2) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Variable__reshape(int32_t _2275_dim0,int32_t _2276_dim1,int32_t _2277_dim2) { return __mosek_2fusion_2BaseVariable__reshape(_2275_dim0,_2276_dim1,_2277_dim2); }
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BaseVariable__reshape(int32_t _2278_dim0,int32_t _2279_dim1) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Variable__reshape(int32_t _2278_dim0,int32_t _2279_dim1) { return __mosek_2fusion_2BaseVariable__reshape(_2278_dim0,_2279_dim1); }
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BaseVariable__reshape(int32_t _2280_dim0) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Variable__reshape(int32_t _2280_dim0) { return __mosek_2fusion_2BaseVariable__reshape(_2280_dim0); }
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BaseVariable__reshape(std::shared_ptr< monty::ndarray< int32_t,1 > > _2281_shape) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Variable__reshape(std::shared_ptr< monty::ndarray< int32_t,1 > > _2281_shape) { return __mosek_2fusion_2BaseVariable__reshape(_2281_shape); }
      virtual void setLevel(std::shared_ptr< monty::ndarray< double,1 > > _2285_v) ;
      virtual monty::rc_ptr< ::mosek::fusion::Model > __mosek_2fusion_2BaseVariable__getModel() ;
      virtual monty::rc_ptr< ::mosek::fusion::Model > __mosek_2fusion_2Variable__getModel() { return __mosek_2fusion_2BaseVariable__getModel(); }
      virtual int32_t getND() ;
      virtual int32_t getDim(int32_t _2288_d) ;
      virtual std::shared_ptr< monty::ndarray< int32_t,1 > > getShape() ;
      virtual int64_t getSize() ;
      virtual std::shared_ptr< monty::ndarray< double,1 > > dual() ;
      virtual std::shared_ptr< monty::ndarray< double,1 > > level() ;
      virtual void makeContinuous() ;
      virtual void makeInteger() ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BaseVariable__transpose() ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Variable__transpose() { return __mosek_2fusion_2BaseVariable__transpose(); }
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BaseVariable__index(int32_t _2309_i0,int32_t _2310_i1,int32_t _2311_i2) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Variable__index(int32_t _2309_i0,int32_t _2310_i1,int32_t _2311_i2) { return __mosek_2fusion_2BaseVariable__index(_2309_i0,_2310_i1,_2311_i2); }
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BaseVariable__index(int32_t _2312_i0,int32_t _2313_i1) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Variable__index(int32_t _2312_i0,int32_t _2313_i1) { return __mosek_2fusion_2BaseVariable__index(_2312_i0,_2313_i1); }
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BaseVariable__index(std::shared_ptr< monty::ndarray< int32_t,1 > > _2314_index) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Variable__index(std::shared_ptr< monty::ndarray< int32_t,1 > > _2314_index) { return __mosek_2fusion_2BaseVariable__index(_2314_index); }
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BaseVariable__index(int32_t _2317_index) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Variable__index(int32_t _2317_index) { return __mosek_2fusion_2BaseVariable__index(_2317_index); }
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BaseVariable__pick(std::shared_ptr< monty::ndarray< int32_t,1 > > _2318_i0,std::shared_ptr< monty::ndarray< int32_t,1 > > _2319_i1,std::shared_ptr< monty::ndarray< int32_t,1 > > _2320_i2) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Variable__pick(std::shared_ptr< monty::ndarray< int32_t,1 > > _2318_i0,std::shared_ptr< monty::ndarray< int32_t,1 > > _2319_i1,std::shared_ptr< monty::ndarray< int32_t,1 > > _2320_i2) { return __mosek_2fusion_2BaseVariable__pick(_2318_i0,_2319_i1,_2320_i2); }
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BaseVariable__pick(std::shared_ptr< monty::ndarray< int32_t,1 > > _2323_i0,std::shared_ptr< monty::ndarray< int32_t,1 > > _2324_i1) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Variable__pick(std::shared_ptr< monty::ndarray< int32_t,1 > > _2323_i0,std::shared_ptr< monty::ndarray< int32_t,1 > > _2324_i1) { return __mosek_2fusion_2BaseVariable__pick(_2323_i0,_2324_i1); }
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BaseVariable__pick(std::shared_ptr< monty::ndarray< int32_t,2 > > _2327_midxs) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Variable__pick(std::shared_ptr< monty::ndarray< int32_t,2 > > _2327_midxs) { return __mosek_2fusion_2BaseVariable__pick(_2327_midxs); }
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BaseVariable__pick(std::shared_ptr< monty::ndarray< int32_t,1 > > _2349_idxs) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Variable__pick(std::shared_ptr< monty::ndarray< int32_t,1 > > _2349_idxs) { return __mosek_2fusion_2BaseVariable__pick(_2349_idxs); }
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BaseVariable__antidiag(int32_t _2360_index) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Variable__antidiag(int32_t _2360_index) { return __mosek_2fusion_2BaseVariable__antidiag(_2360_index); }
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BaseVariable__antidiag() ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Variable__antidiag() { return __mosek_2fusion_2BaseVariable__antidiag(); }
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BaseVariable__diag(int32_t _2361_index) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Variable__diag(int32_t _2361_index) { return __mosek_2fusion_2BaseVariable__diag(_2361_index); }
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BaseVariable__diag() ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Variable__diag() { return __mosek_2fusion_2BaseVariable__diag(); }
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BaseVariable__general_diag(std::shared_ptr< monty::ndarray< int32_t,1 > > _2362_firstidx,std::shared_ptr< monty::ndarray< int32_t,1 > > _2363_step,int32_t _2364_num) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BaseVariable__slice(std::shared_ptr< monty::ndarray< int32_t,1 > > _2385_first,std::shared_ptr< monty::ndarray< int32_t,1 > > _2386_last) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Variable__slice(std::shared_ptr< monty::ndarray< int32_t,1 > > _2385_first,std::shared_ptr< monty::ndarray< int32_t,1 > > _2386_last) { return __mosek_2fusion_2BaseVariable__slice(_2385_first,_2386_last); }
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BaseVariable__slice(int32_t _2420_first,int32_t _2421_last) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2Variable__slice(int32_t _2420_first,int32_t _2421_last) { return __mosek_2fusion_2BaseVariable__slice(_2420_first,_2421_last); }
      virtual monty::rc_ptr< ::mosek::fusion::Expression > __mosek_2fusion_2BaseVariable__asExpr() ;
      virtual monty::rc_ptr< ::mosek::fusion::Expression > __mosek_2fusion_2Variable__asExpr() { return __mosek_2fusion_2BaseVariable__asExpr(); }
      virtual int32_t inst(int32_t _2430_spoffset,std::shared_ptr< monty::ndarray< int64_t,1 > > _2431_sparsity,int32_t _2432_nioffset,std::shared_ptr< monty::ndarray< int64_t,1 > > _2433_nativeidxs) ;
      virtual int32_t numInst() ;
      virtual void inst(int32_t _2438_offset,std::shared_ptr< monty::ndarray< int64_t,1 > > _2439_nindex) ;
      virtual void set_values(std::shared_ptr< monty::ndarray< double,1 > > _2446_values,bool _2447_primal) ;
      virtual void dual_lu(int32_t _2452_offset,std::shared_ptr< monty::ndarray< double,1 > > _2453_target,bool _2454_lower) ;
      virtual void values(int32_t _2457_offset,std::shared_ptr< monty::ndarray< double,1 > > _2458_target,bool _2459_primal) ;
      virtual void make_continuous() ;
      virtual void make_integer() ;
    }; // struct BaseVariable;

    struct p_SliceVariable : public ::mosek::fusion::p_BaseVariable
    {
      SliceVariable * _pubthis;
      static mosek::fusion::p_SliceVariable* _get_impl(mosek::fusion::SliceVariable * _inst){ return static_cast< mosek::fusion::p_SliceVariable* >(mosek::fusion::p_BaseVariable::_get_impl(_inst)); }
      static mosek::fusion::p_SliceVariable * _get_impl(mosek::fusion::SliceVariable::t _inst) { return _get_impl(_inst.get()); }
      p_SliceVariable(SliceVariable * _pubthis);
      virtual ~p_SliceVariable() { /* std::cout << "~p_SliceVariable" << std::endl;*/ };
      std::shared_ptr< monty::ndarray< int32_t,1 > > shape{};
      std::shared_ptr< monty::ndarray< int64_t,1 > > sparsity{};
      std::shared_ptr< monty::ndarray< int64_t,1 > > nativeidxs{};

      virtual void destroy();

      static SliceVariable::t _new_SliceVariable(monty::rc_ptr< ::mosek::fusion::Model > _2010_m,std::shared_ptr< monty::ndarray< int32_t,1 > > _2011_shape,std::shared_ptr< monty::ndarray< int64_t,1 > > _2012_sparsity,std::shared_ptr< monty::ndarray< int64_t,1 > > _2013_nativeidxs);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Model > _2010_m,std::shared_ptr< monty::ndarray< int32_t,1 > > _2011_shape,std::shared_ptr< monty::ndarray< int64_t,1 > > _2012_sparsity,std::shared_ptr< monty::ndarray< int64_t,1 > > _2013_nativeidxs);
      static SliceVariable::t _new_SliceVariable(monty::rc_ptr< ::mosek::fusion::SliceVariable > _2014_v);
      void _initialize(monty::rc_ptr< ::mosek::fusion::SliceVariable > _2014_v);
    }; // struct SliceVariable;

    struct p_BoundInterfaceVariable : public ::mosek::fusion::p_SliceVariable
    {
      BoundInterfaceVariable * _pubthis;
      static mosek::fusion::p_BoundInterfaceVariable* _get_impl(mosek::fusion::BoundInterfaceVariable * _inst){ return static_cast< mosek::fusion::p_BoundInterfaceVariable* >(mosek::fusion::p_SliceVariable::_get_impl(_inst)); }
      static mosek::fusion::p_BoundInterfaceVariable * _get_impl(mosek::fusion::BoundInterfaceVariable::t _inst) { return _get_impl(_inst.get()); }
      p_BoundInterfaceVariable(BoundInterfaceVariable * _pubthis);
      virtual ~p_BoundInterfaceVariable() { /* std::cout << "~p_BoundInterfaceVariable" << std::endl;*/ };
      bool islower{};

      virtual void destroy();

      static BoundInterfaceVariable::t _new_BoundInterfaceVariable(monty::rc_ptr< ::mosek::fusion::Model > _1984_m,std::shared_ptr< monty::ndarray< int32_t,1 > > _1985_shape,std::shared_ptr< monty::ndarray< int64_t,1 > > _1986_sparsity,std::shared_ptr< monty::ndarray< int64_t,1 > > _1987_nativeidxs,bool _1988_islower);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Model > _1984_m,std::shared_ptr< monty::ndarray< int32_t,1 > > _1985_shape,std::shared_ptr< monty::ndarray< int64_t,1 > > _1986_sparsity,std::shared_ptr< monty::ndarray< int64_t,1 > > _1987_nativeidxs,bool _1988_islower);
      static BoundInterfaceVariable::t _new_BoundInterfaceVariable(monty::rc_ptr< ::mosek::fusion::SliceVariable > _1989_v,bool _1990_islower);
      void _initialize(monty::rc_ptr< ::mosek::fusion::SliceVariable > _1989_v,bool _1990_islower);
      virtual /* override */ std::shared_ptr< monty::ndarray< double,1 > > dual() ;
      virtual /* override */ monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BoundInterfaceVariable__transpose() ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BaseVariable__transpose() { return __mosek_2fusion_2BoundInterfaceVariable__transpose(); }
      virtual /* override */ monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BoundInterfaceVariable__pick(std::shared_ptr< monty::ndarray< int32_t,1 > > _1992_i0,std::shared_ptr< monty::ndarray< int32_t,1 > > _1993_i1,std::shared_ptr< monty::ndarray< int32_t,1 > > _1994_i2) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BaseVariable__pick(std::shared_ptr< monty::ndarray< int32_t,1 > > _1992_i0,std::shared_ptr< monty::ndarray< int32_t,1 > > _1993_i1,std::shared_ptr< monty::ndarray< int32_t,1 > > _1994_i2) { return __mosek_2fusion_2BoundInterfaceVariable__pick(_1992_i0,_1993_i1,_1994_i2); }
      virtual /* override */ monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BoundInterfaceVariable__pick(std::shared_ptr< monty::ndarray< int32_t,1 > > _1995_i0,std::shared_ptr< monty::ndarray< int32_t,1 > > _1996_i1) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BaseVariable__pick(std::shared_ptr< monty::ndarray< int32_t,1 > > _1995_i0,std::shared_ptr< monty::ndarray< int32_t,1 > > _1996_i1) { return __mosek_2fusion_2BoundInterfaceVariable__pick(_1995_i0,_1996_i1); }
      virtual /* override */ monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BoundInterfaceVariable__pick(std::shared_ptr< monty::ndarray< int32_t,2 > > _1997_midxs) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BaseVariable__pick(std::shared_ptr< monty::ndarray< int32_t,2 > > _1997_midxs) { return __mosek_2fusion_2BoundInterfaceVariable__pick(_1997_midxs); }
      virtual /* override */ monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BoundInterfaceVariable__pick(std::shared_ptr< monty::ndarray< int32_t,1 > > _1998_idxs) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BaseVariable__pick(std::shared_ptr< monty::ndarray< int32_t,1 > > _1998_idxs) { return __mosek_2fusion_2BoundInterfaceVariable__pick(_1998_idxs); }
      virtual /* override */ monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BoundInterfaceVariable__antidiag(int32_t _1999_index) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BaseVariable__antidiag(int32_t _1999_index) { return __mosek_2fusion_2BoundInterfaceVariable__antidiag(_1999_index); }
      virtual /* override */ monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BoundInterfaceVariable__antidiag() ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BaseVariable__antidiag() { return __mosek_2fusion_2BoundInterfaceVariable__antidiag(); }
      virtual /* override */ monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BoundInterfaceVariable__diag(int32_t _2000_index) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BaseVariable__diag(int32_t _2000_index) { return __mosek_2fusion_2BoundInterfaceVariable__diag(_2000_index); }
      virtual /* override */ monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BoundInterfaceVariable__diag() ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BaseVariable__diag() { return __mosek_2fusion_2BoundInterfaceVariable__diag(); }
      virtual /* override */ monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BoundInterfaceVariable__slice(std::shared_ptr< monty::ndarray< int32_t,1 > > _2001_firsta,std::shared_ptr< monty::ndarray< int32_t,1 > > _2002_lasta) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BaseVariable__slice(std::shared_ptr< monty::ndarray< int32_t,1 > > _2001_firsta,std::shared_ptr< monty::ndarray< int32_t,1 > > _2002_lasta) { return __mosek_2fusion_2BoundInterfaceVariable__slice(_2001_firsta,_2002_lasta); }
      virtual /* override */ monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BoundInterfaceVariable__slice(int32_t _2003_first,int32_t _2004_last) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BaseVariable__slice(int32_t _2003_first,int32_t _2004_last) { return __mosek_2fusion_2BoundInterfaceVariable__slice(_2003_first,_2004_last); }
      virtual monty::rc_ptr< ::mosek::fusion::BoundInterfaceVariable > __mosek_2fusion_2BoundInterfaceVariable__from_(monty::rc_ptr< ::mosek::fusion::Variable > _2005_v) ;
    }; // struct BoundInterfaceVariable;

    struct p_ModelVariable : public ::mosek::fusion::p_BaseVariable
    {
      ModelVariable * _pubthis;
      static mosek::fusion::p_ModelVariable* _get_impl(mosek::fusion::ModelVariable * _inst){ return static_cast< mosek::fusion::p_ModelVariable* >(mosek::fusion::p_BaseVariable::_get_impl(_inst)); }
      static mosek::fusion::p_ModelVariable * _get_impl(mosek::fusion::ModelVariable::t _inst) { return _get_impl(_inst.get()); }
      p_ModelVariable(ModelVariable * _pubthis);
      virtual ~p_ModelVariable() { /* std::cout << "~p_ModelVariable" << std::endl;*/ };
      std::shared_ptr< monty::ndarray< int64_t,1 > > sparsity{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > shape{};
      std::shared_ptr< monty::ndarray< int64_t,1 > > nativeidxs{};
      int64_t varid{};
      std::string name{};

      virtual void destroy();

      static ModelVariable::t _new_ModelVariable(monty::rc_ptr< ::mosek::fusion::ModelVariable > _2120_v,monty::rc_ptr< ::mosek::fusion::Model > _2121_m);
      void _initialize(monty::rc_ptr< ::mosek::fusion::ModelVariable > _2120_v,monty::rc_ptr< ::mosek::fusion::Model > _2121_m);
      static ModelVariable::t _new_ModelVariable(monty::rc_ptr< ::mosek::fusion::Model > _2122_model,const std::string &  _2123_name,std::shared_ptr< monty::ndarray< int32_t,1 > > _2124_shape,int64_t _2125_varid,std::shared_ptr< monty::ndarray< int64_t,1 > > _2126_sparsity,std::shared_ptr< monty::ndarray< int64_t,1 > > _2127_nativeidxs);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Model > _2122_model,const std::string &  _2123_name,std::shared_ptr< monty::ndarray< int32_t,1 > > _2124_shape,int64_t _2125_varid,std::shared_ptr< monty::ndarray< int64_t,1 > > _2126_sparsity,std::shared_ptr< monty::ndarray< int64_t,1 > > _2127_nativeidxs);
      virtual void flushNames() { throw monty::AbstractClassError("Call to abstract method"); }
      virtual void elementName(int64_t _2128_index,monty::rc_ptr< ::mosek::fusion::Utils::StringBuffer > _2129_sb) ;
      virtual /* override */ void remove() ;
      virtual monty::rc_ptr< ::mosek::fusion::ModelVariable > __mosek_2fusion_2ModelVariable__clone(monty::rc_ptr< ::mosek::fusion::Model > _2130_m) { throw monty::AbstractClassError("Call to abstract method"); }
    }; // struct ModelVariable;

    struct p_RangedVariable : public ::mosek::fusion::p_ModelVariable
    {
      RangedVariable * _pubthis;
      static mosek::fusion::p_RangedVariable* _get_impl(mosek::fusion::RangedVariable * _inst){ return static_cast< mosek::fusion::p_RangedVariable* >(mosek::fusion::p_ModelVariable::_get_impl(_inst)); }
      static mosek::fusion::p_RangedVariable * _get_impl(mosek::fusion::RangedVariable::t _inst) { return _get_impl(_inst.get()); }
      p_RangedVariable(RangedVariable * _pubthis);
      virtual ~p_RangedVariable() { /* std::cout << "~p_RangedVariable" << std::endl;*/ };
      std::shared_ptr< monty::ndarray< int32_t,1 > > shape{};
      std::string name{};
      bool names_flushed{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > nativeidxs{};
      std::shared_ptr< monty::ndarray< int64_t,1 > > sparsity{};

      virtual void destroy();

      static RangedVariable::t _new_RangedVariable(monty::rc_ptr< ::mosek::fusion::RangedVariable > _2015_v,monty::rc_ptr< ::mosek::fusion::Model > _2016_m);
      void _initialize(monty::rc_ptr< ::mosek::fusion::RangedVariable > _2015_v,monty::rc_ptr< ::mosek::fusion::Model > _2016_m);
      static RangedVariable::t _new_RangedVariable(monty::rc_ptr< ::mosek::fusion::Model > _2017_model,const std::string &  _2018_name,int64_t _2019_varid,std::shared_ptr< monty::ndarray< int32_t,1 > > _2020_shape,std::shared_ptr< monty::ndarray< int64_t,1 > > _2021_sparsity,std::shared_ptr< monty::ndarray< int32_t,1 > > _2022_nativeidxs);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Model > _2017_model,const std::string &  _2018_name,int64_t _2019_varid,std::shared_ptr< monty::ndarray< int32_t,1 > > _2020_shape,std::shared_ptr< monty::ndarray< int64_t,1 > > _2021_sparsity,std::shared_ptr< monty::ndarray< int32_t,1 > > _2022_nativeidxs);
      virtual monty::rc_ptr< ::mosek::fusion::Utils::StringBuffer > __mosek_2fusion_2RangedVariable__elementDesc(int64_t _2023_index,monty::rc_ptr< ::mosek::fusion::Utils::StringBuffer > _2024_sb) ;
      virtual /* override */ void flushNames() ;
      virtual void dual_u(int32_t _2025_offset,std::shared_ptr< monty::ndarray< double,1 > > _2026_target) ;
      virtual void dual_l(int32_t _2027_offset,std::shared_ptr< monty::ndarray< double,1 > > _2028_target) ;
      virtual monty::rc_ptr< ::mosek::fusion::BoundInterfaceVariable > __mosek_2fusion_2RangedVariable__upperBoundVar() ;
      virtual monty::rc_ptr< ::mosek::fusion::BoundInterfaceVariable > __mosek_2fusion_2RangedVariable__lowerBoundVar() ;
      virtual /* override */ monty::rc_ptr< ::mosek::fusion::ModelVariable > __mosek_2fusion_2RangedVariable__clone(monty::rc_ptr< ::mosek::fusion::Model > _2031_m) ;
      virtual monty::rc_ptr< ::mosek::fusion::ModelVariable > __mosek_2fusion_2ModelVariable__clone(monty::rc_ptr< ::mosek::fusion::Model > _2031_m) { return __mosek_2fusion_2RangedVariable__clone(_2031_m); }
      static  std::shared_ptr< monty::ndarray< int64_t,1 > > globalNativeIndexes(std::shared_ptr< monty::ndarray< int32_t,1 > > _2032_nativeidxs);
    }; // struct RangedVariable;

    struct p_LinearPSDVariable : public ::mosek::fusion::p_ModelVariable
    {
      LinearPSDVariable * _pubthis;
      static mosek::fusion::p_LinearPSDVariable* _get_impl(mosek::fusion::LinearPSDVariable * _inst){ return static_cast< mosek::fusion::p_LinearPSDVariable* >(mosek::fusion::p_ModelVariable::_get_impl(_inst)); }
      static mosek::fusion::p_LinearPSDVariable * _get_impl(mosek::fusion::LinearPSDVariable::t _inst) { return _get_impl(_inst.get()); }
      p_LinearPSDVariable(LinearPSDVariable * _pubthis);
      virtual ~p_LinearPSDVariable() { /* std::cout << "~p_LinearPSDVariable" << std::endl;*/ };
      std::shared_ptr< monty::ndarray< int32_t,1 > > shape{};
      std::string name{};
      int32_t varid{};
      std::shared_ptr< monty::ndarray< int64_t,1 > > nativeidxs{};
      int32_t conedim{};

      virtual void destroy();

      static LinearPSDVariable::t _new_LinearPSDVariable(monty::rc_ptr< ::mosek::fusion::LinearPSDVariable > _2035_v,monty::rc_ptr< ::mosek::fusion::Model > _2036_m);
      void _initialize(monty::rc_ptr< ::mosek::fusion::LinearPSDVariable > _2035_v,monty::rc_ptr< ::mosek::fusion::Model > _2036_m);
      static LinearPSDVariable::t _new_LinearPSDVariable(monty::rc_ptr< ::mosek::fusion::Model > _2037_model,const std::string &  _2038_name,int32_t _2039_varid,std::shared_ptr< monty::ndarray< int32_t,1 > > _2040_shape,int32_t _2041_conedim,std::shared_ptr< monty::ndarray< int64_t,1 > > _2042_nativeidxs);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Model > _2037_model,const std::string &  _2038_name,int32_t _2039_varid,std::shared_ptr< monty::ndarray< int32_t,1 > > _2040_shape,int32_t _2041_conedim,std::shared_ptr< monty::ndarray< int64_t,1 > > _2042_nativeidxs);
      virtual /* override */ void flushNames() ;
      virtual /* override */ std::string toString() ;
      virtual void make_continuous(std::shared_ptr< monty::ndarray< int64_t,1 > > _2045_idxs) ;
      virtual void make_integer(std::shared_ptr< monty::ndarray< int64_t,1 > > _2046_idxs) ;
      virtual /* override */ monty::rc_ptr< ::mosek::fusion::ModelVariable > __mosek_2fusion_2LinearPSDVariable__clone(monty::rc_ptr< ::mosek::fusion::Model > _2047_m) ;
      virtual monty::rc_ptr< ::mosek::fusion::ModelVariable > __mosek_2fusion_2ModelVariable__clone(monty::rc_ptr< ::mosek::fusion::Model > _2047_m) { return __mosek_2fusion_2LinearPSDVariable__clone(_2047_m); }
      static  std::shared_ptr< monty::ndarray< int64_t,1 > > globalNativeIndexes(std::shared_ptr< monty::ndarray< int64_t,1 > > _2048_nativeidxs);
    }; // struct LinearPSDVariable;

    struct p_PSDVariable : public ::mosek::fusion::p_ModelVariable
    {
      PSDVariable * _pubthis;
      static mosek::fusion::p_PSDVariable* _get_impl(mosek::fusion::PSDVariable * _inst){ return static_cast< mosek::fusion::p_PSDVariable* >(mosek::fusion::p_ModelVariable::_get_impl(_inst)); }
      static mosek::fusion::p_PSDVariable * _get_impl(mosek::fusion::PSDVariable::t _inst) { return _get_impl(_inst.get()); }
      p_PSDVariable(PSDVariable * _pubthis);
      virtual ~p_PSDVariable() { /* std::cout << "~p_PSDVariable" << std::endl;*/ };
      monty::rc_ptr< ::mosek::fusion::Model > model{};
      bool names_flushed{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > barvaridxs{};
      int32_t conedim2{};
      int32_t conedim1{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > shape{};
      std::string name{};
      std::shared_ptr< monty::ndarray< int64_t,1 > > nativeidxs{};
      int32_t varid{};

      virtual void destroy();

      static PSDVariable::t _new_PSDVariable(monty::rc_ptr< ::mosek::fusion::PSDVariable > _2050_v,monty::rc_ptr< ::mosek::fusion::Model > _2051_m);
      void _initialize(monty::rc_ptr< ::mosek::fusion::PSDVariable > _2050_v,monty::rc_ptr< ::mosek::fusion::Model > _2051_m);
      static PSDVariable::t _new_PSDVariable(monty::rc_ptr< ::mosek::fusion::Model > _2052_model,const std::string &  _2053_name,int32_t _2054_varid,std::shared_ptr< monty::ndarray< int32_t,1 > > _2055_shape,int32_t _2056_conedim1,int32_t _2057_conedim2,std::shared_ptr< monty::ndarray< int32_t,1 > > _2058_barvaridxs,std::shared_ptr< monty::ndarray< int64_t,1 > > _2059_nativeidxs);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Model > _2052_model,const std::string &  _2053_name,int32_t _2054_varid,std::shared_ptr< monty::ndarray< int32_t,1 > > _2055_shape,int32_t _2056_conedim1,int32_t _2057_conedim2,std::shared_ptr< monty::ndarray< int32_t,1 > > _2058_barvaridxs,std::shared_ptr< monty::ndarray< int64_t,1 > > _2059_nativeidxs);
      virtual /* override */ void flushNames() ;
      virtual /* override */ std::string toString() ;
      virtual monty::rc_ptr< ::mosek::fusion::Utils::StringBuffer > __mosek_2fusion_2PSDVariable__elementDesc(int64_t _2062_index,monty::rc_ptr< ::mosek::fusion::Utils::StringBuffer > _2063_sb) ;
      virtual /* override */ monty::rc_ptr< ::mosek::fusion::ModelVariable > __mosek_2fusion_2PSDVariable__clone(monty::rc_ptr< ::mosek::fusion::Model > _2064_m) ;
      virtual monty::rc_ptr< ::mosek::fusion::ModelVariable > __mosek_2fusion_2ModelVariable__clone(monty::rc_ptr< ::mosek::fusion::Model > _2064_m) { return __mosek_2fusion_2PSDVariable__clone(_2064_m); }
      static  std::shared_ptr< monty::ndarray< int64_t,1 > > fullnativeidxs(std::shared_ptr< monty::ndarray< int32_t,1 > > _2065_shape,int32_t _2066_conedim1,int32_t _2067_conedim2,std::shared_ptr< monty::ndarray< int64_t,1 > > _2068_nativeidxs);
    }; // struct PSDVariable;

    struct p_LinearVariable : public ::mosek::fusion::p_ModelVariable
    {
      LinearVariable * _pubthis;
      static mosek::fusion::p_LinearVariable* _get_impl(mosek::fusion::LinearVariable * _inst){ return static_cast< mosek::fusion::p_LinearVariable* >(mosek::fusion::p_ModelVariable::_get_impl(_inst)); }
      static mosek::fusion::p_LinearVariable * _get_impl(mosek::fusion::LinearVariable::t _inst) { return _get_impl(_inst.get()); }
      p_LinearVariable(LinearVariable * _pubthis);
      virtual ~p_LinearVariable() { /* std::cout << "~p_LinearVariable" << std::endl;*/ };
      std::shared_ptr< monty::ndarray< int32_t,1 > > shape{};
      std::shared_ptr< monty::ndarray< int64_t,1 > > sparsity{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > nativeidxs{};
      bool names_flushed{};
      std::string name{};

      virtual void destroy();

      static LinearVariable::t _new_LinearVariable(monty::rc_ptr< ::mosek::fusion::LinearVariable > _2093_v,monty::rc_ptr< ::mosek::fusion::Model > _2094_m);
      void _initialize(monty::rc_ptr< ::mosek::fusion::LinearVariable > _2093_v,monty::rc_ptr< ::mosek::fusion::Model > _2094_m);
      static LinearVariable::t _new_LinearVariable(monty::rc_ptr< ::mosek::fusion::Model > _2095_model,const std::string &  _2096_name,int64_t _2097_varid,std::shared_ptr< monty::ndarray< int32_t,1 > > _2098_shape,std::shared_ptr< monty::ndarray< int64_t,1 > > _2099_sparsity,std::shared_ptr< monty::ndarray< int32_t,1 > > _2100_nativeidxs);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Model > _2095_model,const std::string &  _2096_name,int64_t _2097_varid,std::shared_ptr< monty::ndarray< int32_t,1 > > _2098_shape,std::shared_ptr< monty::ndarray< int64_t,1 > > _2099_sparsity,std::shared_ptr< monty::ndarray< int32_t,1 > > _2100_nativeidxs);
      virtual /* override */ std::string toString() ;
      virtual /* override */ void flushNames() ;
      virtual /* override */ monty::rc_ptr< ::mosek::fusion::ModelVariable > __mosek_2fusion_2LinearVariable__clone(monty::rc_ptr< ::mosek::fusion::Model > _2103_m) ;
      virtual monty::rc_ptr< ::mosek::fusion::ModelVariable > __mosek_2fusion_2ModelVariable__clone(monty::rc_ptr< ::mosek::fusion::Model > _2103_m) { return __mosek_2fusion_2LinearVariable__clone(_2103_m); }
      static  std::shared_ptr< monty::ndarray< int64_t,1 > > globalNativeIndexes(std::shared_ptr< monty::ndarray< int32_t,1 > > _2104_nativeidxs);
    }; // struct LinearVariable;

    struct p_ConicVariable : public ::mosek::fusion::p_ModelVariable
    {
      ConicVariable * _pubthis;
      static mosek::fusion::p_ConicVariable* _get_impl(mosek::fusion::ConicVariable * _inst){ return static_cast< mosek::fusion::p_ConicVariable* >(mosek::fusion::p_ModelVariable::_get_impl(_inst)); }
      static mosek::fusion::p_ConicVariable * _get_impl(mosek::fusion::ConicVariable::t _inst) { return _get_impl(_inst.get()); }
      p_ConicVariable(ConicVariable * _pubthis);
      virtual ~p_ConicVariable() { /* std::cout << "~p_ConicVariable" << std::endl;*/ };
      std::shared_ptr< monty::ndarray< int32_t,1 > > nativeidxs{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > shape{};
      std::string name{};
      bool names_flushed{};
      int32_t varid{};

      virtual void destroy();

      static ConicVariable::t _new_ConicVariable(monty::rc_ptr< ::mosek::fusion::ConicVariable > _2107_v,monty::rc_ptr< ::mosek::fusion::Model > _2108_m);
      void _initialize(monty::rc_ptr< ::mosek::fusion::ConicVariable > _2107_v,monty::rc_ptr< ::mosek::fusion::Model > _2108_m);
      static ConicVariable::t _new_ConicVariable(monty::rc_ptr< ::mosek::fusion::Model > _2109_model,const std::string &  _2110_name,int32_t _2111_varid,std::shared_ptr< monty::ndarray< int32_t,1 > > _2112_shape,std::shared_ptr< monty::ndarray< int32_t,1 > > _2113_nativeidxs);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Model > _2109_model,const std::string &  _2110_name,int32_t _2111_varid,std::shared_ptr< monty::ndarray< int32_t,1 > > _2112_shape,std::shared_ptr< monty::ndarray< int32_t,1 > > _2113_nativeidxs);
      virtual /* override */ std::string toString() ;
      virtual /* override */ void flushNames() ;
      virtual /* override */ monty::rc_ptr< ::mosek::fusion::ModelVariable > __mosek_2fusion_2ConicVariable__clone(monty::rc_ptr< ::mosek::fusion::Model > _2116_m) ;
      virtual monty::rc_ptr< ::mosek::fusion::ModelVariable > __mosek_2fusion_2ModelVariable__clone(monty::rc_ptr< ::mosek::fusion::Model > _2116_m) { return __mosek_2fusion_2ConicVariable__clone(_2116_m); }
      static  std::shared_ptr< monty::ndarray< int64_t,1 > > globalNativeIndexes(std::shared_ptr< monty::ndarray< int32_t,1 > > _2117_nativeidxs);
    }; // struct ConicVariable;

    struct p_NilVariable : public ::mosek::fusion::p_BaseVariable
    {
      NilVariable * _pubthis;
      static mosek::fusion::p_NilVariable* _get_impl(mosek::fusion::NilVariable * _inst){ return static_cast< mosek::fusion::p_NilVariable* >(mosek::fusion::p_BaseVariable::_get_impl(_inst)); }
      static mosek::fusion::p_NilVariable * _get_impl(mosek::fusion::NilVariable::t _inst) { return _get_impl(_inst.get()); }
      p_NilVariable(NilVariable * _pubthis);
      virtual ~p_NilVariable() { /* std::cout << "~p_NilVariable" << std::endl;*/ };
      std::shared_ptr< monty::ndarray< int32_t,1 > > shape{};

      virtual void destroy();

      static NilVariable::t _new_NilVariable(std::shared_ptr< monty::ndarray< int32_t,1 > > _2131_shape);
      void _initialize(std::shared_ptr< monty::ndarray< int32_t,1 > > _2131_shape);
      static NilVariable::t _new_NilVariable();
      void _initialize();
      virtual void flushNames() ;
      virtual monty::rc_ptr< ::mosek::fusion::Utils::StringBuffer > __mosek_2fusion_2NilVariable__elementDesc(int64_t _2133_index,monty::rc_ptr< ::mosek::fusion::Utils::StringBuffer > _2134_sb) ;
      virtual void elementName(int64_t _2135_index,monty::rc_ptr< ::mosek::fusion::Utils::StringBuffer > _2136_sb) ;
      virtual /* override */ int32_t numInst() ;
      virtual int32_t inst(int32_t _2137_offset,std::shared_ptr< monty::ndarray< int64_t,1 > > _2138_sparsity,std::shared_ptr< monty::ndarray< int64_t,1 > > _2139_nativeidxs) ;
      virtual /* override */ void inst(int32_t _2140_offset,std::shared_ptr< monty::ndarray< int64_t,1 > > _2141_nindex) ;
      virtual /* override */ void set_values(std::shared_ptr< monty::ndarray< double,1 > > _2142_target,bool _2143_primal) ;
      virtual /* override */ void values(int32_t _2144_offset,std::shared_ptr< monty::ndarray< double,1 > > _2145_target,bool _2146_primal) ;
      virtual /* override */ void make_continuous() ;
      virtual /* override */ void make_integer() ;
      virtual /* override */ std::string toString() ;
      virtual /* override */ monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2NilVariable__index(std::shared_ptr< monty::ndarray< int32_t,1 > > _2147_first) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BaseVariable__index(std::shared_ptr< monty::ndarray< int32_t,1 > > _2147_first) { return __mosek_2fusion_2NilVariable__index(_2147_first); }
      virtual /* override */ monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2NilVariable__index(int32_t _2149_first) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BaseVariable__index(int32_t _2149_first) { return __mosek_2fusion_2NilVariable__index(_2149_first); }
      virtual /* override */ monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2NilVariable__slice(std::shared_ptr< monty::ndarray< int32_t,1 > > _2151_first,std::shared_ptr< monty::ndarray< int32_t,1 > > _2152_last) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BaseVariable__slice(std::shared_ptr< monty::ndarray< int32_t,1 > > _2151_first,std::shared_ptr< monty::ndarray< int32_t,1 > > _2152_last) { return __mosek_2fusion_2NilVariable__slice(_2151_first,_2152_last); }
      virtual /* override */ monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2NilVariable__slice(int32_t _2155_first,int32_t _2156_last) ;
      virtual monty::rc_ptr< ::mosek::fusion::Variable > __mosek_2fusion_2BaseVariable__slice(int32_t _2155_first,int32_t _2156_last) { return __mosek_2fusion_2NilVariable__slice(_2155_first,_2156_last); }
    }; // struct NilVariable;

    struct p_Var
    {
      Var * _pubthis;
      static mosek::fusion::p_Var* _get_impl(mosek::fusion::Var * _inst){ assert(_inst); assert(_inst->_impl); return _inst->_impl; }
      static mosek::fusion::p_Var * _get_impl(mosek::fusion::Var::t _inst) { return _get_impl(_inst.get()); }
      p_Var(Var * _pubthis);
      virtual ~p_Var() { /* std::cout << "~p_Var" << std::endl;*/ };

      virtual void destroy();

      static  monty::rc_ptr< ::mosek::fusion::Variable > empty(std::shared_ptr< monty::ndarray< int32_t,1 > > _2502_shape);
      static  monty::rc_ptr< ::mosek::fusion::Variable > compress(monty::rc_ptr< ::mosek::fusion::Variable > _2504_v);
      static  monty::rc_ptr< ::mosek::fusion::Variable > reshape(monty::rc_ptr< ::mosek::fusion::Variable > _2512_v,int32_t _2513_d1);
      static  monty::rc_ptr< ::mosek::fusion::Variable > reshape(monty::rc_ptr< ::mosek::fusion::Variable > _2514_v,int32_t _2515_d1,int32_t _2516_d2);
      static  monty::rc_ptr< ::mosek::fusion::Variable > flatten(monty::rc_ptr< ::mosek::fusion::Variable > _2517_v);
      static  monty::rc_ptr< ::mosek::fusion::Variable > reshape(monty::rc_ptr< ::mosek::fusion::Variable > _2518_v,std::shared_ptr< monty::ndarray< int32_t,1 > > _2519_shape);
      static  monty::rc_ptr< ::mosek::fusion::Variable > index_permute_(monty::rc_ptr< ::mosek::fusion::Variable > _2520_v,std::shared_ptr< monty::ndarray< int32_t,1 > > _2521_perm);
      static  monty::rc_ptr< ::mosek::fusion::Variable > hrepeat(monty::rc_ptr< ::mosek::fusion::Variable > _2550_v,int32_t _2551_n);
      static  monty::rc_ptr< ::mosek::fusion::Variable > vrepeat(monty::rc_ptr< ::mosek::fusion::Variable > _2552_v,int32_t _2553_n);
      static  monty::rc_ptr< ::mosek::fusion::Variable > repeat(monty::rc_ptr< ::mosek::fusion::Variable > _2554_v,int32_t _2555_n);
      static  monty::rc_ptr< ::mosek::fusion::Variable > repeat(monty::rc_ptr< ::mosek::fusion::Variable > _2556_v,int32_t _2557_dim,int32_t _2558_n);
      static  monty::rc_ptr< ::mosek::fusion::Variable > drepeat(monty::rc_ptr< ::mosek::fusion::Variable > _2559_v,int32_t _2560_dim,int32_t _2561_n);
      static  monty::rc_ptr< ::mosek::fusion::Variable > stack(std::shared_ptr< monty::ndarray< std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::Variable >,1 > >,1 > > _2625_vlist);
      static  monty::rc_ptr< ::mosek::fusion::Variable > vstack(monty::rc_ptr< ::mosek::fusion::Variable > _2627_v1,monty::rc_ptr< ::mosek::fusion::Variable > _2628_v2,monty::rc_ptr< ::mosek::fusion::Variable > _2629_v3);
      static  monty::rc_ptr< ::mosek::fusion::Variable > vstack(monty::rc_ptr< ::mosek::fusion::Variable > _2630_v1,monty::rc_ptr< ::mosek::fusion::Variable > _2631_v2);
      static  monty::rc_ptr< ::mosek::fusion::Variable > vstack(std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::Variable >,1 > > _2632_v);
      static  monty::rc_ptr< ::mosek::fusion::Variable > hstack(monty::rc_ptr< ::mosek::fusion::Variable > _2633_v1,monty::rc_ptr< ::mosek::fusion::Variable > _2634_v2,monty::rc_ptr< ::mosek::fusion::Variable > _2635_v3);
      static  monty::rc_ptr< ::mosek::fusion::Variable > hstack(monty::rc_ptr< ::mosek::fusion::Variable > _2636_v1,monty::rc_ptr< ::mosek::fusion::Variable > _2637_v2);
      static  monty::rc_ptr< ::mosek::fusion::Variable > hstack(std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::Variable >,1 > > _2638_v);
      static  monty::rc_ptr< ::mosek::fusion::Variable > stack(std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::Variable >,1 > > _2639_v,int32_t _2640_dim);
      static  monty::rc_ptr< ::mosek::fusion::Variable > stack(monty::rc_ptr< ::mosek::fusion::Variable > _2641_v1,monty::rc_ptr< ::mosek::fusion::Variable > _2642_v2,monty::rc_ptr< ::mosek::fusion::Variable > _2643_v3,int32_t _2644_dim);
      static  monty::rc_ptr< ::mosek::fusion::Variable > stack(monty::rc_ptr< ::mosek::fusion::Variable > _2645_v1,monty::rc_ptr< ::mosek::fusion::Variable > _2646_v2,int32_t _2647_dim);
      static  monty::rc_ptr< ::mosek::fusion::Variable > stack(int32_t _2648_dim,std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::Variable >,1 > > _2649_v);
      static  monty::rc_ptr< ::mosek::fusion::Variable > stack(int32_t _2652_dim,monty::rc_ptr< ::mosek::fusion::Variable > _2653_v1,monty::rc_ptr< ::mosek::fusion::Variable > _2654_v2,monty::rc_ptr< ::mosek::fusion::Variable > _2655_v3);
      static  monty::rc_ptr< ::mosek::fusion::Variable > stack(int32_t _2656_dim,monty::rc_ptr< ::mosek::fusion::Variable > _2657_v1,monty::rc_ptr< ::mosek::fusion::Variable > _2658_v2);
      static  monty::rc_ptr< ::mosek::fusion::Variable > promote(monty::rc_ptr< ::mosek::fusion::Variable > _2659_v,int32_t _2660_nd);
      static  monty::rc_ptr< ::mosek::fusion::Variable > dstack(std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::Variable >,1 > > _2665_v,int32_t _2666_dim);
    }; // struct Var;

    struct p_Constraint
    {
      Constraint * _pubthis;
      static mosek::fusion::p_Constraint* _get_impl(mosek::fusion::Constraint * _inst){ assert(_inst); assert(_inst->_impl); return _inst->_impl; }
      static mosek::fusion::p_Constraint * _get_impl(mosek::fusion::Constraint::t _inst) { return _get_impl(_inst.get()); }
      p_Constraint(Constraint * _pubthis);
      virtual ~p_Constraint() { /* std::cout << "~p_Constraint" << std::endl;*/ };
      std::shared_ptr< monty::ndarray< int32_t,1 > > nativeidxs{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > shape{};
      monty::rc_ptr< ::mosek::fusion::Model > model{};

      virtual void destroy();

      static Constraint::t _new_Constraint(monty::rc_ptr< ::mosek::fusion::Constraint > _2857_c,monty::rc_ptr< ::mosek::fusion::Model > _2858_m);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Constraint > _2857_c,monty::rc_ptr< ::mosek::fusion::Model > _2858_m);
      static Constraint::t _new_Constraint(monty::rc_ptr< ::mosek::fusion::Model > _2859_model,std::shared_ptr< monty::ndarray< int32_t,1 > > _2860_shape,std::shared_ptr< monty::ndarray< int32_t,1 > > _2861_nativeidxs);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Model > _2859_model,std::shared_ptr< monty::ndarray< int32_t,1 > > _2860_shape,std::shared_ptr< monty::ndarray< int32_t,1 > > _2861_nativeidxs);
      virtual /* override */ std::string toString() ;
      virtual void toStringArray(std::shared_ptr< monty::ndarray< int64_t,1 > > _2862_subi,int64_t _2863_dstidx,std::shared_ptr< monty::ndarray< std::string,1 > > _2864_result) ;
      virtual void dual_lu(int32_t _2865_offset,std::shared_ptr< monty::ndarray< double,1 > > _2866_target,bool _2867_islower) ;
      virtual std::shared_ptr< monty::ndarray< double,1 > > dual() ;
      virtual std::shared_ptr< monty::ndarray< double,1 > > level() ;
      virtual void values(bool _2870_primal,int32_t _2871_offset,std::shared_ptr< monty::ndarray< double,1 > > _2872_target) ;
      virtual void remove() ;
      virtual void update(std::shared_ptr< monty::ndarray< double,1 > > _2873_bfix) ;
      virtual void update(monty::rc_ptr< ::mosek::fusion::Expression > _2874_expr) ;
      virtual void update(monty::rc_ptr< ::mosek::fusion::Expression > _2878_expr,monty::rc_ptr< ::mosek::fusion::Variable > _2879_x,bool _2880_bfixupdate) ;
      virtual void update(monty::rc_ptr< ::mosek::fusion::Expression > _2900_expr,monty::rc_ptr< ::mosek::fusion::Variable > _2901_x) ;
      virtual monty::rc_ptr< ::mosek::fusion::Model > __mosek_2fusion_2Constraint__get_model() ;
      virtual int32_t get_nd() ;
      virtual int64_t size() ;
      static  monty::rc_ptr< ::mosek::fusion::Constraint > stack(std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::Constraint >,1 > > _2904_clist,int32_t _2905_dim);
      static  monty::rc_ptr< ::mosek::fusion::Constraint > stack(monty::rc_ptr< ::mosek::fusion::Constraint > _2906_v1,monty::rc_ptr< ::mosek::fusion::Constraint > _2907_v2,monty::rc_ptr< ::mosek::fusion::Constraint > _2908_v3,int32_t _2909_dim);
      static  monty::rc_ptr< ::mosek::fusion::Constraint > stack(monty::rc_ptr< ::mosek::fusion::Constraint > _2910_v1,monty::rc_ptr< ::mosek::fusion::Constraint > _2911_v2,int32_t _2912_dim);
      static  monty::rc_ptr< ::mosek::fusion::Constraint > hstack(std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::Constraint >,1 > > _2913_clist);
      static  monty::rc_ptr< ::mosek::fusion::Constraint > vstack(std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::Constraint >,1 > > _2914_clist);
      static  monty::rc_ptr< ::mosek::fusion::Constraint > hstack(monty::rc_ptr< ::mosek::fusion::Constraint > _2915_v1,monty::rc_ptr< ::mosek::fusion::Constraint > _2916_v2,monty::rc_ptr< ::mosek::fusion::Constraint > _2917_v3);
      static  monty::rc_ptr< ::mosek::fusion::Constraint > vstack(monty::rc_ptr< ::mosek::fusion::Constraint > _2918_v1,monty::rc_ptr< ::mosek::fusion::Constraint > _2919_v2,monty::rc_ptr< ::mosek::fusion::Constraint > _2920_v3);
      static  monty::rc_ptr< ::mosek::fusion::Constraint > hstack(monty::rc_ptr< ::mosek::fusion::Constraint > _2921_v1,monty::rc_ptr< ::mosek::fusion::Constraint > _2922_v2);
      static  monty::rc_ptr< ::mosek::fusion::Constraint > vstack(monty::rc_ptr< ::mosek::fusion::Constraint > _2923_v1,monty::rc_ptr< ::mosek::fusion::Constraint > _2924_v2);
      static  monty::rc_ptr< ::mosek::fusion::Constraint > dstack(std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::Constraint >,1 > > _2925_c,int32_t _2926_dim);
      virtual monty::rc_ptr< ::mosek::fusion::Constraint > __mosek_2fusion_2Constraint__index(std::shared_ptr< monty::ndarray< int32_t,1 > > _2977_idxa) ;
      virtual monty::rc_ptr< ::mosek::fusion::Constraint > __mosek_2fusion_2Constraint__index(int32_t _2984_idx) ;
      virtual monty::rc_ptr< ::mosek::fusion::Constraint > __mosek_2fusion_2Constraint__slice(std::shared_ptr< monty::ndarray< int32_t,1 > > _2985_firsta,std::shared_ptr< monty::ndarray< int32_t,1 > > _2986_lasta) ;
      virtual monty::rc_ptr< ::mosek::fusion::Constraint > __mosek_2fusion_2Constraint__slice(int32_t _3005_first,int32_t _3006_last) ;
      virtual int32_t getND() ;
      virtual int32_t getSize() ;
      virtual monty::rc_ptr< ::mosek::fusion::Model > __mosek_2fusion_2Constraint__getModel() ;
      virtual std::shared_ptr< monty::ndarray< int32_t,1 > > getShape() ;
      virtual std::shared_ptr< monty::ndarray< int32_t,1 > > getNativeidxs() ;
    }; // struct Constraint;

    struct p_SliceConstraint : public ::mosek::fusion::p_Constraint
    {
      SliceConstraint * _pubthis;
      static mosek::fusion::p_SliceConstraint* _get_impl(mosek::fusion::SliceConstraint * _inst){ return static_cast< mosek::fusion::p_SliceConstraint* >(mosek::fusion::p_Constraint::_get_impl(_inst)); }
      static mosek::fusion::p_SliceConstraint * _get_impl(mosek::fusion::SliceConstraint::t _inst) { return _get_impl(_inst.get()); }
      p_SliceConstraint(SliceConstraint * _pubthis);
      virtual ~p_SliceConstraint() { /* std::cout << "~p_SliceConstraint" << std::endl;*/ };

      virtual void destroy();

      static SliceConstraint::t _new_SliceConstraint(monty::rc_ptr< ::mosek::fusion::SliceConstraint > _2809_c);
      void _initialize(monty::rc_ptr< ::mosek::fusion::SliceConstraint > _2809_c);
      static SliceConstraint::t _new_SliceConstraint(monty::rc_ptr< ::mosek::fusion::Model > _2810_model,std::shared_ptr< monty::ndarray< int32_t,1 > > _2811_shape,std::shared_ptr< monty::ndarray< int32_t,1 > > _2812_nativeidxs);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Model > _2810_model,std::shared_ptr< monty::ndarray< int32_t,1 > > _2811_shape,std::shared_ptr< monty::ndarray< int32_t,1 > > _2812_nativeidxs);
      virtual /* override */ std::string toString() ;
    }; // struct SliceConstraint;

    struct p_BoundInterfaceConstraint : public ::mosek::fusion::p_SliceConstraint
    {
      BoundInterfaceConstraint * _pubthis;
      static mosek::fusion::p_BoundInterfaceConstraint* _get_impl(mosek::fusion::BoundInterfaceConstraint * _inst){ return static_cast< mosek::fusion::p_BoundInterfaceConstraint* >(mosek::fusion::p_SliceConstraint::_get_impl(_inst)); }
      static mosek::fusion::p_BoundInterfaceConstraint * _get_impl(mosek::fusion::BoundInterfaceConstraint::t _inst) { return _get_impl(_inst.get()); }
      p_BoundInterfaceConstraint(BoundInterfaceConstraint * _pubthis);
      virtual ~p_BoundInterfaceConstraint() { /* std::cout << "~p_BoundInterfaceConstraint" << std::endl;*/ };
      bool islower{};

      virtual void destroy();

      static BoundInterfaceConstraint::t _new_BoundInterfaceConstraint(monty::rc_ptr< ::mosek::fusion::Model > _2735_m,std::shared_ptr< monty::ndarray< int32_t,1 > > _2736_shape,std::shared_ptr< monty::ndarray< int32_t,1 > > _2737_nativeidxs,bool _2738_islower);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Model > _2735_m,std::shared_ptr< monty::ndarray< int32_t,1 > > _2736_shape,std::shared_ptr< monty::ndarray< int32_t,1 > > _2737_nativeidxs,bool _2738_islower);
      static BoundInterfaceConstraint::t _new_BoundInterfaceConstraint(monty::rc_ptr< ::mosek::fusion::SliceConstraint > _2739_c,bool _2740_islower);
      void _initialize(monty::rc_ptr< ::mosek::fusion::SliceConstraint > _2739_c,bool _2740_islower);
      virtual /* override */ std::shared_ptr< monty::ndarray< double,1 > > dual() ;
      virtual /* override */ monty::rc_ptr< ::mosek::fusion::Constraint > __mosek_2fusion_2BoundInterfaceConstraint__slice(std::shared_ptr< monty::ndarray< int32_t,1 > > _2742_firsta,std::shared_ptr< monty::ndarray< int32_t,1 > > _2743_lasta) ;
      virtual monty::rc_ptr< ::mosek::fusion::Constraint > __mosek_2fusion_2Constraint__slice(std::shared_ptr< monty::ndarray< int32_t,1 > > _2742_firsta,std::shared_ptr< monty::ndarray< int32_t,1 > > _2743_lasta) { return __mosek_2fusion_2BoundInterfaceConstraint__slice(_2742_firsta,_2743_lasta); }
      virtual /* override */ monty::rc_ptr< ::mosek::fusion::Constraint > __mosek_2fusion_2BoundInterfaceConstraint__slice(int32_t _2745_first,int32_t _2746_last) ;
      virtual monty::rc_ptr< ::mosek::fusion::Constraint > __mosek_2fusion_2Constraint__slice(int32_t _2745_first,int32_t _2746_last) { return __mosek_2fusion_2BoundInterfaceConstraint__slice(_2745_first,_2746_last); }
      virtual /* override */ monty::rc_ptr< ::mosek::fusion::Constraint > __mosek_2fusion_2BoundInterfaceConstraint__index(std::shared_ptr< monty::ndarray< int32_t,1 > > _2748_idxa) ;
      virtual monty::rc_ptr< ::mosek::fusion::Constraint > __mosek_2fusion_2Constraint__index(std::shared_ptr< monty::ndarray< int32_t,1 > > _2748_idxa) { return __mosek_2fusion_2BoundInterfaceConstraint__index(_2748_idxa); }
      virtual /* override */ monty::rc_ptr< ::mosek::fusion::Constraint > __mosek_2fusion_2BoundInterfaceConstraint__index(int32_t _2750_idx) ;
      virtual monty::rc_ptr< ::mosek::fusion::Constraint > __mosek_2fusion_2Constraint__index(int32_t _2750_idx) { return __mosek_2fusion_2BoundInterfaceConstraint__index(_2750_idx); }
      virtual monty::rc_ptr< ::mosek::fusion::BoundInterfaceConstraint > __mosek_2fusion_2BoundInterfaceConstraint__from_(monty::rc_ptr< ::mosek::fusion::Constraint > _2752_c) ;
    }; // struct BoundInterfaceConstraint;

    struct p_ModelConstraint : public ::mosek::fusion::p_Constraint
    {
      ModelConstraint * _pubthis;
      static mosek::fusion::p_ModelConstraint* _get_impl(mosek::fusion::ModelConstraint * _inst){ return static_cast< mosek::fusion::p_ModelConstraint* >(mosek::fusion::p_Constraint::_get_impl(_inst)); }
      static mosek::fusion::p_ModelConstraint * _get_impl(mosek::fusion::ModelConstraint::t _inst) { return _get_impl(_inst.get()); }
      p_ModelConstraint(ModelConstraint * _pubthis);
      virtual ~p_ModelConstraint() { /* std::cout << "~p_ModelConstraint" << std::endl;*/ };
      int32_t conid{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > shape{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > nativeidxs{};
      std::string name{};

      virtual void destroy();

      static ModelConstraint::t _new_ModelConstraint(monty::rc_ptr< ::mosek::fusion::ModelConstraint > _2848_c,monty::rc_ptr< ::mosek::fusion::Model > _2849_m);
      void _initialize(monty::rc_ptr< ::mosek::fusion::ModelConstraint > _2848_c,monty::rc_ptr< ::mosek::fusion::Model > _2849_m);
      static ModelConstraint::t _new_ModelConstraint(monty::rc_ptr< ::mosek::fusion::Model > _2850_model,const std::string &  _2851_name,std::shared_ptr< monty::ndarray< int32_t,1 > > _2852_shape,std::shared_ptr< monty::ndarray< int32_t,1 > > _2853_nidxs,int32_t _2854_conid);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Model > _2850_model,const std::string &  _2851_name,std::shared_ptr< monty::ndarray< int32_t,1 > > _2852_shape,std::shared_ptr< monty::ndarray< int32_t,1 > > _2853_nidxs,int32_t _2854_conid);
      virtual /* override */ std::string toString() ;
      virtual void flushNames() ;
      virtual monty::rc_ptr< ::mosek::fusion::ModelConstraint > __mosek_2fusion_2ModelConstraint__clone(monty::rc_ptr< ::mosek::fusion::Model > _2856_m) { throw monty::AbstractClassError("Call to abstract method"); }
      virtual /* override */ void remove() ;
    }; // struct ModelConstraint;

    struct p_LinearPSDConstraint : public ::mosek::fusion::p_ModelConstraint
    {
      LinearPSDConstraint * _pubthis;
      static mosek::fusion::p_LinearPSDConstraint* _get_impl(mosek::fusion::LinearPSDConstraint * _inst){ return static_cast< mosek::fusion::p_LinearPSDConstraint* >(mosek::fusion::p_ModelConstraint::_get_impl(_inst)); }
      static mosek::fusion::p_LinearPSDConstraint * _get_impl(mosek::fusion::LinearPSDConstraint::t _inst) { return _get_impl(_inst.get()); }
      p_LinearPSDConstraint(LinearPSDConstraint * _pubthis);
      virtual ~p_LinearPSDConstraint() { /* std::cout << "~p_LinearPSDConstraint" << std::endl;*/ };
      int32_t conedim{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > shape{};
      int32_t conid{};
      std::shared_ptr< monty::ndarray< int64_t,1 > > slackidxs{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > nativeidxs{};

      virtual void destroy();

      static LinearPSDConstraint::t _new_LinearPSDConstraint(monty::rc_ptr< ::mosek::fusion::LinearPSDConstraint > _2755_c,monty::rc_ptr< ::mosek::fusion::Model > _2756_m);
      void _initialize(monty::rc_ptr< ::mosek::fusion::LinearPSDConstraint > _2755_c,monty::rc_ptr< ::mosek::fusion::Model > _2756_m);
      static LinearPSDConstraint::t _new_LinearPSDConstraint(monty::rc_ptr< ::mosek::fusion::Model > _2757_model,const std::string &  _2758_name,int32_t _2759_conid,std::shared_ptr< monty::ndarray< int32_t,1 > > _2760_shape,int32_t _2761_conedim,std::shared_ptr< monty::ndarray< int32_t,1 > > _2762_nativeidxs,std::shared_ptr< monty::ndarray< int64_t,1 > > _2763_slackidxs);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Model > _2757_model,const std::string &  _2758_name,int32_t _2759_conid,std::shared_ptr< monty::ndarray< int32_t,1 > > _2760_shape,int32_t _2761_conedim,std::shared_ptr< monty::ndarray< int32_t,1 > > _2762_nativeidxs,std::shared_ptr< monty::ndarray< int64_t,1 > > _2763_slackidxs);
      virtual void domainToString(int64_t _2764_i,monty::rc_ptr< ::mosek::fusion::Utils::StringBuffer > _2765_sb) ;
      virtual /* override */ monty::rc_ptr< ::mosek::fusion::ModelConstraint > __mosek_2fusion_2LinearPSDConstraint__clone(monty::rc_ptr< ::mosek::fusion::Model > _2769_m) ;
      virtual monty::rc_ptr< ::mosek::fusion::ModelConstraint > __mosek_2fusion_2ModelConstraint__clone(monty::rc_ptr< ::mosek::fusion::Model > _2769_m) { return __mosek_2fusion_2LinearPSDConstraint__clone(_2769_m); }
    }; // struct LinearPSDConstraint;

    struct p_PSDConstraint : public ::mosek::fusion::p_ModelConstraint
    {
      PSDConstraint * _pubthis;
      static mosek::fusion::p_PSDConstraint* _get_impl(mosek::fusion::PSDConstraint * _inst){ return static_cast< mosek::fusion::p_PSDConstraint* >(mosek::fusion::p_ModelConstraint::_get_impl(_inst)); }
      static mosek::fusion::p_PSDConstraint * _get_impl(mosek::fusion::PSDConstraint::t _inst) { return _get_impl(_inst.get()); }
      p_PSDConstraint(PSDConstraint * _pubthis);
      virtual ~p_PSDConstraint() { /* std::cout << "~p_PSDConstraint" << std::endl;*/ };
      bool names_flushed{};
      int32_t conedim1{};
      int32_t conedim0{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > shape{};
      std::string name{};
      std::shared_ptr< monty::ndarray< int64_t,1 > > slackidxs{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > nativeidxs{};
      int32_t conid{};

      virtual void destroy();

      static PSDConstraint::t _new_PSDConstraint(monty::rc_ptr< ::mosek::fusion::PSDConstraint > _2770_c,monty::rc_ptr< ::mosek::fusion::Model > _2771_m);
      void _initialize(monty::rc_ptr< ::mosek::fusion::PSDConstraint > _2770_c,monty::rc_ptr< ::mosek::fusion::Model > _2771_m);
      static PSDConstraint::t _new_PSDConstraint(monty::rc_ptr< ::mosek::fusion::Model > _2772_model,const std::string &  _2773_name,int32_t _2774_conid,std::shared_ptr< monty::ndarray< int32_t,1 > > _2775_shape,int32_t _2776_conedim0,int32_t _2777_conedim1,std::shared_ptr< monty::ndarray< int64_t,1 > > _2778_slackidxs,std::shared_ptr< monty::ndarray< int32_t,1 > > _2779_nativeidxs);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Model > _2772_model,const std::string &  _2773_name,int32_t _2774_conid,std::shared_ptr< monty::ndarray< int32_t,1 > > _2775_shape,int32_t _2776_conedim0,int32_t _2777_conedim1,std::shared_ptr< monty::ndarray< int64_t,1 > > _2778_slackidxs,std::shared_ptr< monty::ndarray< int32_t,1 > > _2779_nativeidxs);
      virtual /* override */ std::string toString() ;
      virtual /* override */ monty::rc_ptr< ::mosek::fusion::ModelConstraint > __mosek_2fusion_2PSDConstraint__clone(monty::rc_ptr< ::mosek::fusion::Model > _2780_m) ;
      virtual monty::rc_ptr< ::mosek::fusion::ModelConstraint > __mosek_2fusion_2ModelConstraint__clone(monty::rc_ptr< ::mosek::fusion::Model > _2780_m) { return __mosek_2fusion_2PSDConstraint__clone(_2780_m); }
      static  std::shared_ptr< monty::ndarray< int32_t,1 > > computenidxs(std::shared_ptr< monty::ndarray< int32_t,1 > > _2781_shape,int32_t _2782_d0,int32_t _2783_d1,std::shared_ptr< monty::ndarray< int32_t,1 > > _2784_nativeidxs);
    }; // struct PSDConstraint;

    struct p_RangedConstraint : public ::mosek::fusion::p_ModelConstraint
    {
      RangedConstraint * _pubthis;
      static mosek::fusion::p_RangedConstraint* _get_impl(mosek::fusion::RangedConstraint * _inst){ return static_cast< mosek::fusion::p_RangedConstraint* >(mosek::fusion::p_ModelConstraint::_get_impl(_inst)); }
      static mosek::fusion::p_RangedConstraint * _get_impl(mosek::fusion::RangedConstraint::t _inst) { return _get_impl(_inst.get()); }
      p_RangedConstraint(RangedConstraint * _pubthis);
      virtual ~p_RangedConstraint() { /* std::cout << "~p_RangedConstraint" << std::endl;*/ };
      std::shared_ptr< monty::ndarray< int32_t,1 > > nativeidxs{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > shape{};

      virtual void destroy();

      static RangedConstraint::t _new_RangedConstraint(monty::rc_ptr< ::mosek::fusion::RangedConstraint > _2814_c,monty::rc_ptr< ::mosek::fusion::Model > _2815_m);
      void _initialize(monty::rc_ptr< ::mosek::fusion::RangedConstraint > _2814_c,monty::rc_ptr< ::mosek::fusion::Model > _2815_m);
      static RangedConstraint::t _new_RangedConstraint(monty::rc_ptr< ::mosek::fusion::Model > _2816_model,const std::string &  _2817_name,std::shared_ptr< monty::ndarray< int32_t,1 > > _2818_shape,std::shared_ptr< monty::ndarray< int32_t,1 > > _2819_nativeidxs,int32_t _2820_conid);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Model > _2816_model,const std::string &  _2817_name,std::shared_ptr< monty::ndarray< int32_t,1 > > _2818_shape,std::shared_ptr< monty::ndarray< int32_t,1 > > _2819_nativeidxs,int32_t _2820_conid);
      virtual monty::rc_ptr< ::mosek::fusion::BoundInterfaceConstraint > __mosek_2fusion_2RangedConstraint__upperBoundCon() ;
      virtual monty::rc_ptr< ::mosek::fusion::BoundInterfaceConstraint > __mosek_2fusion_2RangedConstraint__lowerBoundCon() ;
      virtual /* override */ monty::rc_ptr< ::mosek::fusion::ModelConstraint > __mosek_2fusion_2RangedConstraint__clone(monty::rc_ptr< ::mosek::fusion::Model > _2821_m) ;
      virtual monty::rc_ptr< ::mosek::fusion::ModelConstraint > __mosek_2fusion_2ModelConstraint__clone(monty::rc_ptr< ::mosek::fusion::Model > _2821_m) { return __mosek_2fusion_2RangedConstraint__clone(_2821_m); }
    }; // struct RangedConstraint;

    struct p_ConicConstraint : public ::mosek::fusion::p_ModelConstraint
    {
      ConicConstraint * _pubthis;
      static mosek::fusion::p_ConicConstraint* _get_impl(mosek::fusion::ConicConstraint * _inst){ return static_cast< mosek::fusion::p_ConicConstraint* >(mosek::fusion::p_ModelConstraint::_get_impl(_inst)); }
      static mosek::fusion::p_ConicConstraint * _get_impl(mosek::fusion::ConicConstraint::t _inst) { return _get_impl(_inst.get()); }
      p_ConicConstraint(ConicConstraint * _pubthis);
      virtual ~p_ConicConstraint() { /* std::cout << "~p_ConicConstraint" << std::endl;*/ };
      std::shared_ptr< monty::ndarray< std::shared_ptr< monty::ndarray< std::string,1 > >,1 > > indexnames{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > nativeidxs{};
      bool names_flushed{};
      std::string name{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > shape{};
      monty::rc_ptr< ::mosek::fusion::ConeDomain > dom{};
      int32_t conid{};

      virtual void destroy();

      static ConicConstraint::t _new_ConicConstraint(monty::rc_ptr< ::mosek::fusion::ConicConstraint > _2822_c,monty::rc_ptr< ::mosek::fusion::Model > _2823_m);
      void _initialize(monty::rc_ptr< ::mosek::fusion::ConicConstraint > _2822_c,monty::rc_ptr< ::mosek::fusion::Model > _2823_m);
      static ConicConstraint::t _new_ConicConstraint(monty::rc_ptr< ::mosek::fusion::Model > _2824_model,const std::string &  _2825_name,monty::rc_ptr< ::mosek::fusion::ConeDomain > _2826_dom,std::shared_ptr< monty::ndarray< int32_t,1 > > _2827_shape,int32_t _2828_conid,std::shared_ptr< monty::ndarray< int32_t,1 > > _2829_nativeidxs,std::shared_ptr< monty::ndarray< std::shared_ptr< monty::ndarray< std::string,1 > >,1 > > _2830_indexnames);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Model > _2824_model,const std::string &  _2825_name,monty::rc_ptr< ::mosek::fusion::ConeDomain > _2826_dom,std::shared_ptr< monty::ndarray< int32_t,1 > > _2827_shape,int32_t _2828_conid,std::shared_ptr< monty::ndarray< int32_t,1 > > _2829_nativeidxs,std::shared_ptr< monty::ndarray< std::shared_ptr< monty::ndarray< std::string,1 > >,1 > > _2830_indexnames);
      virtual /* override */ std::string toString() ;
      virtual void domainToString(int64_t _2833_i,monty::rc_ptr< ::mosek::fusion::Utils::StringBuffer > _2834_sb) ;
      virtual /* override */ monty::rc_ptr< ::mosek::fusion::ModelConstraint > __mosek_2fusion_2ConicConstraint__clone(monty::rc_ptr< ::mosek::fusion::Model > _2835_m) ;
      virtual monty::rc_ptr< ::mosek::fusion::ModelConstraint > __mosek_2fusion_2ModelConstraint__clone(monty::rc_ptr< ::mosek::fusion::Model > _2835_m) { return __mosek_2fusion_2ConicConstraint__clone(_2835_m); }
    }; // struct ConicConstraint;

    struct p_LinearConstraint : public ::mosek::fusion::p_ModelConstraint
    {
      LinearConstraint * _pubthis;
      static mosek::fusion::p_LinearConstraint* _get_impl(mosek::fusion::LinearConstraint * _inst){ return static_cast< mosek::fusion::p_LinearConstraint* >(mosek::fusion::p_ModelConstraint::_get_impl(_inst)); }
      static mosek::fusion::p_LinearConstraint * _get_impl(mosek::fusion::LinearConstraint::t _inst) { return _get_impl(_inst.get()); }
      p_LinearConstraint(LinearConstraint * _pubthis);
      virtual ~p_LinearConstraint() { /* std::cout << "~p_LinearConstraint" << std::endl;*/ };
      std::shared_ptr< monty::ndarray< std::shared_ptr< monty::ndarray< std::string,1 > >,1 > > indexnames{};
      bool names_flushed{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > nidxs{};
      std::string name{};
      int32_t conid{};

      virtual void destroy();

      static LinearConstraint::t _new_LinearConstraint(monty::rc_ptr< ::mosek::fusion::LinearConstraint > _2836_c,monty::rc_ptr< ::mosek::fusion::Model > _2837_m);
      void _initialize(monty::rc_ptr< ::mosek::fusion::LinearConstraint > _2836_c,monty::rc_ptr< ::mosek::fusion::Model > _2837_m);
      static LinearConstraint::t _new_LinearConstraint(monty::rc_ptr< ::mosek::fusion::Model > _2838_model,const std::string &  _2839_name,int32_t _2840_conid,std::shared_ptr< monty::ndarray< int32_t,1 > > _2841_shape,std::shared_ptr< monty::ndarray< int32_t,1 > > _2842_nidxs,std::shared_ptr< monty::ndarray< std::shared_ptr< monty::ndarray< std::string,1 > >,1 > > _2843_indexnames);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Model > _2838_model,const std::string &  _2839_name,int32_t _2840_conid,std::shared_ptr< monty::ndarray< int32_t,1 > > _2841_shape,std::shared_ptr< monty::ndarray< int32_t,1 > > _2842_nidxs,std::shared_ptr< monty::ndarray< std::shared_ptr< monty::ndarray< std::string,1 > >,1 > > _2843_indexnames);
      virtual /* override */ std::string toString() ;
      virtual /* override */ void flushNames() ;
      virtual void domainToString(int64_t _2845_i,monty::rc_ptr< ::mosek::fusion::Utils::StringBuffer > _2846_sb) ;
      virtual /* override */ monty::rc_ptr< ::mosek::fusion::ModelConstraint > __mosek_2fusion_2LinearConstraint__clone(monty::rc_ptr< ::mosek::fusion::Model > _2847_m) ;
      virtual monty::rc_ptr< ::mosek::fusion::ModelConstraint > __mosek_2fusion_2ModelConstraint__clone(monty::rc_ptr< ::mosek::fusion::Model > _2847_m) { return __mosek_2fusion_2LinearConstraint__clone(_2847_m); }
    }; // struct LinearConstraint;

    struct p_Set
    {
      Set * _pubthis;
      static mosek::fusion::p_Set* _get_impl(mosek::fusion::Set * _inst){ assert(_inst); assert(_inst->_impl); return _inst->_impl; }
      static mosek::fusion::p_Set * _get_impl(mosek::fusion::Set::t _inst) { return _get_impl(_inst.get()); }
      p_Set(Set * _pubthis);
      virtual ~p_Set() { /* std::cout << "~p_Set" << std::endl;*/ };

      virtual void destroy();

      static  int64_t size(std::shared_ptr< monty::ndarray< int32_t,1 > > _3011_shape);
      static  bool match(std::shared_ptr< monty::ndarray< int32_t,1 > > _3014_s1,std::shared_ptr< monty::ndarray< int32_t,1 > > _3015_s2);
      static  int64_t linearidx(std::shared_ptr< monty::ndarray< int32_t,1 > > _3017_shape,std::shared_ptr< monty::ndarray< int32_t,1 > > _3018_key);
      static  std::shared_ptr< monty::ndarray< int32_t,1 > > idxtokey(std::shared_ptr< monty::ndarray< int32_t,1 > > _3021_shape,int64_t _3022_idx);
      static  void idxtokey(std::shared_ptr< monty::ndarray< int32_t,1 > > _3024_shape,int64_t _3025_idx,std::shared_ptr< monty::ndarray< int32_t,1 > > _3026_dest);
      static  std::string indexToString(std::shared_ptr< monty::ndarray< int32_t,1 > > _3030_shape,int64_t _3031_key);
      static  std::string keyToString(std::shared_ptr< monty::ndarray< int32_t,1 > > _3038_key);
      static  void indexToKey(std::shared_ptr< monty::ndarray< int32_t,1 > > _3041_shape,int64_t _3042_key,std::shared_ptr< monty::ndarray< int32_t,1 > > _3043_res);
      static  std::shared_ptr< monty::ndarray< int64_t,1 > > strides(std::shared_ptr< monty::ndarray< int32_t,1 > > _3047_shape);
      static  std::shared_ptr< monty::ndarray< int32_t,1 > > make(std::shared_ptr< monty::ndarray< int32_t,1 > > _3051_set1,std::shared_ptr< monty::ndarray< int32_t,1 > > _3052_set2);
      static  std::shared_ptr< monty::ndarray< int32_t,1 > > make(std::shared_ptr< monty::ndarray< int32_t,1 > > _3056_sizes);
      static  std::shared_ptr< monty::ndarray< int32_t,1 > > make(int32_t _3058_s1,int32_t _3059_s2,int32_t _3060_s3);
      static  std::shared_ptr< monty::ndarray< int32_t,1 > > make(int32_t _3061_s1,int32_t _3062_s2);
      static  std::shared_ptr< monty::ndarray< int32_t,1 > > make(int32_t _3063_sz);
      static  std::shared_ptr< monty::ndarray< int32_t,1 > > scalar();
      static  std::shared_ptr< monty::ndarray< int32_t,1 > > make(std::shared_ptr< monty::ndarray< std::string,1 > > _3064_names);
    }; // struct Set;

    struct p_ConeDomain
    {
      ConeDomain * _pubthis;
      static mosek::fusion::p_ConeDomain* _get_impl(mosek::fusion::ConeDomain * _inst){ assert(_inst); assert(_inst->_impl); return _inst->_impl; }
      static mosek::fusion::p_ConeDomain * _get_impl(mosek::fusion::ConeDomain::t _inst) { return _get_impl(_inst.get()); }
      p_ConeDomain(ConeDomain * _pubthis);
      virtual ~p_ConeDomain() { /* std::cout << "~p_ConeDomain" << std::endl;*/ };
      std::shared_ptr< monty::ndarray< std::shared_ptr< monty::ndarray< std::string,1 > >,1 > > indexnames{};
      int64_t domsize{};
      std::shared_ptr< monty::ndarray< double,1 > > domofs{};
      std::shared_ptr< monty::ndarray< double,1 > > alpha{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > shape{};
      bool int_flag{};
      bool axisset{};
      int32_t axisidx{};
      mosek::fusion::QConeKey key{};

      virtual void destroy();

      static ConeDomain::t _new_ConeDomain(mosek::fusion::QConeKey _3065_k,std::shared_ptr< monty::ndarray< double,1 > > _3066_alpha,std::shared_ptr< monty::ndarray< int32_t,1 > > _3067_d);
      void _initialize(mosek::fusion::QConeKey _3065_k,std::shared_ptr< monty::ndarray< double,1 > > _3066_alpha,std::shared_ptr< monty::ndarray< int32_t,1 > > _3067_d);
      static ConeDomain::t _new_ConeDomain(mosek::fusion::QConeKey _3068_k,std::shared_ptr< monty::ndarray< int32_t,1 > > _3069_d);
      void _initialize(mosek::fusion::QConeKey _3068_k,std::shared_ptr< monty::ndarray< int32_t,1 > > _3069_d);
      virtual bool match_shape(std::shared_ptr< monty::ndarray< int32_t,1 > > _3070_shp) ;
      virtual monty::rc_ptr< ::mosek::fusion::ConeDomain > __mosek_2fusion_2ConeDomain__integral() ;
      virtual bool axisIsSet() ;
      virtual int32_t getAxis() ;
      virtual monty::rc_ptr< ::mosek::fusion::ConeDomain > __mosek_2fusion_2ConeDomain__axis(int32_t _3071_a) ;
      virtual monty::rc_ptr< ::mosek::fusion::ConeDomain > __mosek_2fusion_2ConeDomain__withShape(int32_t _3072_dim0,int32_t _3073_dim1,int32_t _3074_dim2) ;
      virtual monty::rc_ptr< ::mosek::fusion::ConeDomain > __mosek_2fusion_2ConeDomain__withShape(int32_t _3075_dim0,int32_t _3076_dim1) ;
      virtual monty::rc_ptr< ::mosek::fusion::ConeDomain > __mosek_2fusion_2ConeDomain__withShape(int32_t _3077_dim0) ;
      virtual monty::rc_ptr< ::mosek::fusion::ConeDomain > __mosek_2fusion_2ConeDomain__withShape(std::shared_ptr< monty::ndarray< int32_t,1 > > _3078_shp) ;
      virtual monty::rc_ptr< ::mosek::fusion::ConeDomain > __mosek_2fusion_2ConeDomain__withShape_(std::shared_ptr< monty::ndarray< int32_t,1 > > _3079_shp) ;
      virtual monty::rc_ptr< ::mosek::fusion::ConeDomain > __mosek_2fusion_2ConeDomain__withNamesOnAxis(std::shared_ptr< monty::ndarray< std::string,1 > > _3080_names,int32_t _3081_axis) ;
      virtual void finalize_and_validate(std::shared_ptr< monty::ndarray< int32_t,1 > > _3086_shp) ;
    }; // struct ConeDomain;

    struct p_PSDDomain
    {
      PSDDomain * _pubthis;
      static mosek::fusion::p_PSDDomain* _get_impl(mosek::fusion::PSDDomain * _inst){ assert(_inst); assert(_inst->_impl); return _inst->_impl; }
      static mosek::fusion::p_PSDDomain * _get_impl(mosek::fusion::PSDDomain::t _inst) { return _get_impl(_inst.get()); }
      p_PSDDomain(PSDDomain * _pubthis);
      virtual ~p_PSDDomain() { /* std::cout << "~p_PSDDomain" << std::endl;*/ };
      std::shared_ptr< monty::ndarray< std::shared_ptr< monty::ndarray< std::string,1 > >,1 > > indexnames{};
      bool axisIsSet{};
      int32_t conedim2{};
      int32_t conedim1{};
      mosek::fusion::PSDKey key{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > shape{};

      virtual void destroy();

      static PSDDomain::t _new_PSDDomain(mosek::fusion::PSDKey _3090_k,std::shared_ptr< monty::ndarray< int32_t,1 > > _3091_shp,int32_t _3092_conedim1,int32_t _3093_conedim2);
      void _initialize(mosek::fusion::PSDKey _3090_k,std::shared_ptr< monty::ndarray< int32_t,1 > > _3091_shp,int32_t _3092_conedim1,int32_t _3093_conedim2);
      static PSDDomain::t _new_PSDDomain(mosek::fusion::PSDKey _3095_k,std::shared_ptr< monty::ndarray< int32_t,1 > > _3096_shp);
      void _initialize(mosek::fusion::PSDKey _3095_k,std::shared_ptr< monty::ndarray< int32_t,1 > > _3096_shp);
      static PSDDomain::t _new_PSDDomain(mosek::fusion::PSDKey _3097_k);
      void _initialize(mosek::fusion::PSDKey _3097_k);
      virtual monty::rc_ptr< ::mosek::fusion::PSDDomain > __mosek_2fusion_2PSDDomain__axis(int32_t _3098_conedim1,int32_t _3099_conedim2) ;
      virtual monty::rc_ptr< ::mosek::fusion::PSDDomain > __mosek_2fusion_2PSDDomain__withNamesOnAxis(std::shared_ptr< monty::ndarray< std::string,1 > > _3100_names,int32_t _3101_axis) ;
      virtual void finalize_and_validate(std::shared_ptr< monty::ndarray< int32_t,1 > > _3108_shp) ;
    }; // struct PSDDomain;

    struct p_RangeDomain
    {
      RangeDomain * _pubthis;
      static mosek::fusion::p_RangeDomain* _get_impl(mosek::fusion::RangeDomain * _inst){ assert(_inst); assert(_inst->_impl); return _inst->_impl; }
      static mosek::fusion::p_RangeDomain * _get_impl(mosek::fusion::RangeDomain::t _inst) { return _get_impl(_inst.get()); }
      p_RangeDomain(RangeDomain * _pubthis);
      virtual ~p_RangeDomain() { /* std::cout << "~p_RangeDomain" << std::endl;*/ };
      int64_t domsize{};
      int64_t nelements{};
      std::shared_ptr< monty::ndarray< std::shared_ptr< monty::ndarray< std::string,1 > >,1 > > indexnames{};
      bool cardinal_flag{};
      bool scalable{};
      std::shared_ptr< monty::ndarray< double,1 > > ub{};
      std::shared_ptr< monty::ndarray< double,1 > > lb{};
      std::shared_ptr< monty::ndarray< int32_t,2 > > sparsity{};
      bool empty{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > shape{};

      virtual void destroy();

      static RangeDomain::t _new_RangeDomain(bool _3112_scalable,std::shared_ptr< monty::ndarray< double,1 > > _3113_lb,std::shared_ptr< monty::ndarray< double,1 > > _3114_ub,std::shared_ptr< monty::ndarray< int32_t,1 > > _3115_dims);
      void _initialize(bool _3112_scalable,std::shared_ptr< monty::ndarray< double,1 > > _3113_lb,std::shared_ptr< monty::ndarray< double,1 > > _3114_ub,std::shared_ptr< monty::ndarray< int32_t,1 > > _3115_dims);
      static RangeDomain::t _new_RangeDomain(bool _3116_scalable,std::shared_ptr< monty::ndarray< double,1 > > _3117_lb,std::shared_ptr< monty::ndarray< double,1 > > _3118_ub,std::shared_ptr< monty::ndarray< int32_t,1 > > _3119_dims,std::shared_ptr< monty::ndarray< int32_t,2 > > _3120_sp);
      void _initialize(bool _3116_scalable,std::shared_ptr< monty::ndarray< double,1 > > _3117_lb,std::shared_ptr< monty::ndarray< double,1 > > _3118_ub,std::shared_ptr< monty::ndarray< int32_t,1 > > _3119_dims,std::shared_ptr< monty::ndarray< int32_t,2 > > _3120_sp);
      static RangeDomain::t _new_RangeDomain(bool _3121_scalable,std::shared_ptr< monty::ndarray< double,1 > > _3122_lb,std::shared_ptr< monty::ndarray< double,1 > > _3123_ub,std::shared_ptr< monty::ndarray< int32_t,1 > > _3124_dims,std::shared_ptr< monty::ndarray< int32_t,2 > > _3125_sp,int32_t _3126_steal);
      void _initialize(bool _3121_scalable,std::shared_ptr< monty::ndarray< double,1 > > _3122_lb,std::shared_ptr< monty::ndarray< double,1 > > _3123_ub,std::shared_ptr< monty::ndarray< int32_t,1 > > _3124_dims,std::shared_ptr< monty::ndarray< int32_t,2 > > _3125_sp,int32_t _3126_steal);
      static RangeDomain::t _new_RangeDomain(monty::rc_ptr< ::mosek::fusion::RangeDomain > _3127_other);
      void _initialize(monty::rc_ptr< ::mosek::fusion::RangeDomain > _3127_other);
      virtual monty::rc_ptr< ::mosek::fusion::SymmetricRangeDomain > __mosek_2fusion_2RangeDomain__symmetric() ;
      virtual monty::rc_ptr< ::mosek::fusion::RangeDomain > __mosek_2fusion_2RangeDomain__sparse(std::shared_ptr< monty::ndarray< int32_t,2 > > _3129_sparsity) ;
      virtual monty::rc_ptr< ::mosek::fusion::RangeDomain > __mosek_2fusion_2RangeDomain__sparse(std::shared_ptr< monty::ndarray< int32_t,1 > > _3132_sparsity) ;
      virtual monty::rc_ptr< ::mosek::fusion::RangeDomain > __mosek_2fusion_2RangeDomain__sparse() ;
      virtual monty::rc_ptr< ::mosek::fusion::RangeDomain > __mosek_2fusion_2RangeDomain__integral() ;
      virtual monty::rc_ptr< ::mosek::fusion::RangeDomain > __mosek_2fusion_2RangeDomain__withShape(int32_t _3134_dim0,int32_t _3135_dim1,int32_t _3136_dim2) ;
      virtual monty::rc_ptr< ::mosek::fusion::RangeDomain > __mosek_2fusion_2RangeDomain__withShape(int32_t _3137_dim0,int32_t _3138_dim1) ;
      virtual monty::rc_ptr< ::mosek::fusion::RangeDomain > __mosek_2fusion_2RangeDomain__withShape(int32_t _3139_dim0) ;
      virtual monty::rc_ptr< ::mosek::fusion::RangeDomain > __mosek_2fusion_2RangeDomain__withShape(std::shared_ptr< monty::ndarray< int32_t,1 > > _3140_shp) ;
      virtual monty::rc_ptr< ::mosek::fusion::RangeDomain > __mosek_2fusion_2RangeDomain__withNamesOnAxis(std::shared_ptr< monty::ndarray< std::string,1 > > _3141_names,int32_t _3142_axis) ;
      virtual bool match_shape(std::shared_ptr< monty::ndarray< int32_t,1 > > _3149_shp) ;
      virtual void finalize_and_validate(std::shared_ptr< monty::ndarray< int32_t,1 > > _3151_shp) ;
    }; // struct RangeDomain;

    struct p_SymmetricRangeDomain : public ::mosek::fusion::p_RangeDomain
    {
      SymmetricRangeDomain * _pubthis;
      static mosek::fusion::p_SymmetricRangeDomain* _get_impl(mosek::fusion::SymmetricRangeDomain * _inst){ return static_cast< mosek::fusion::p_SymmetricRangeDomain* >(mosek::fusion::p_RangeDomain::_get_impl(_inst)); }
      static mosek::fusion::p_SymmetricRangeDomain * _get_impl(mosek::fusion::SymmetricRangeDomain::t _inst) { return _get_impl(_inst.get()); }
      p_SymmetricRangeDomain(SymmetricRangeDomain * _pubthis);
      virtual ~p_SymmetricRangeDomain() { /* std::cout << "~p_SymmetricRangeDomain" << std::endl;*/ };
      int32_t dim{};

      virtual void destroy();

      static SymmetricRangeDomain::t _new_SymmetricRangeDomain(monty::rc_ptr< ::mosek::fusion::RangeDomain > _3111_other);
      void _initialize(monty::rc_ptr< ::mosek::fusion::RangeDomain > _3111_other);
    }; // struct SymmetricRangeDomain;

    struct p_SymmetricLinearDomain
    {
      SymmetricLinearDomain * _pubthis;
      static mosek::fusion::p_SymmetricLinearDomain* _get_impl(mosek::fusion::SymmetricLinearDomain * _inst){ assert(_inst); assert(_inst->_impl); return _inst->_impl; }
      static mosek::fusion::p_SymmetricLinearDomain * _get_impl(mosek::fusion::SymmetricLinearDomain::t _inst) { return _get_impl(_inst.get()); }
      p_SymmetricLinearDomain(SymmetricLinearDomain * _pubthis);
      virtual ~p_SymmetricLinearDomain() { /* std::cout << "~p_SymmetricLinearDomain" << std::endl;*/ };
      std::shared_ptr< monty::ndarray< int32_t,2 > > sparsity{};
      bool cardinal_flag{};
      mosek::fusion::RelationKey key{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > shape{};
      monty::rc_ptr< ::mosek::fusion::LinearDomain > dom{};
      int32_t dim{};

      virtual void destroy();

      static SymmetricLinearDomain::t _new_SymmetricLinearDomain(monty::rc_ptr< ::mosek::fusion::LinearDomain > _3158_other);
      void _initialize(monty::rc_ptr< ::mosek::fusion::LinearDomain > _3158_other);
      virtual monty::rc_ptr< ::mosek::fusion::SymmetricLinearDomain > __mosek_2fusion_2SymmetricLinearDomain__sparse(std::shared_ptr< monty::ndarray< int32_t,2 > > _3159_sparsity) ;
      virtual monty::rc_ptr< ::mosek::fusion::SymmetricLinearDomain > __mosek_2fusion_2SymmetricLinearDomain__sparse(std::shared_ptr< monty::ndarray< int32_t,1 > > _3162_sparsity) ;
      virtual monty::rc_ptr< ::mosek::fusion::SymmetricLinearDomain > __mosek_2fusion_2SymmetricLinearDomain__integral() ;
      virtual bool match_shape(std::shared_ptr< monty::ndarray< int32_t,1 > > _3164_shp) ;
    }; // struct SymmetricLinearDomain;

    struct p_LinearDomain
    {
      LinearDomain * _pubthis;
      static mosek::fusion::p_LinearDomain* _get_impl(mosek::fusion::LinearDomain * _inst){ assert(_inst); assert(_inst->_impl); return _inst->_impl; }
      static mosek::fusion::p_LinearDomain * _get_impl(mosek::fusion::LinearDomain::t _inst) { return _get_impl(_inst.get()); }
      p_LinearDomain(LinearDomain * _pubthis);
      virtual ~p_LinearDomain() { /* std::cout << "~p_LinearDomain" << std::endl;*/ };
      int64_t nelements{};
      int64_t domsize{};
      std::shared_ptr< monty::ndarray< std::shared_ptr< monty::ndarray< std::string,1 > >,1 > > indexnames{};
      bool empty{};
      bool scalable{};
      std::shared_ptr< monty::ndarray< int32_t,2 > > sparsity{};
      bool cardinal_flag{};
      mosek::fusion::RelationKey key{};
      std::shared_ptr< monty::ndarray< double,1 > > bnd{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > shape{};

      virtual void destroy();

      static LinearDomain::t _new_LinearDomain(mosek::fusion::RelationKey _3166_k,bool _3167_scalable,std::shared_ptr< monty::ndarray< double,1 > > _3168_rhs,std::shared_ptr< monty::ndarray< int32_t,1 > > _3169_dims);
      void _initialize(mosek::fusion::RelationKey _3166_k,bool _3167_scalable,std::shared_ptr< monty::ndarray< double,1 > > _3168_rhs,std::shared_ptr< monty::ndarray< int32_t,1 > > _3169_dims);
      static LinearDomain::t _new_LinearDomain(mosek::fusion::RelationKey _3170_k,bool _3171_scalable,std::shared_ptr< monty::ndarray< double,1 > > _3172_rhs,std::shared_ptr< monty::ndarray< int32_t,1 > > _3173_dims,std::shared_ptr< monty::ndarray< int32_t,2 > > _3174_sp,int32_t _3175_steal);
      void _initialize(mosek::fusion::RelationKey _3170_k,bool _3171_scalable,std::shared_ptr< monty::ndarray< double,1 > > _3172_rhs,std::shared_ptr< monty::ndarray< int32_t,1 > > _3173_dims,std::shared_ptr< monty::ndarray< int32_t,2 > > _3174_sp,int32_t _3175_steal);
      static LinearDomain::t _new_LinearDomain(monty::rc_ptr< ::mosek::fusion::LinearDomain > _3176_other);
      void _initialize(monty::rc_ptr< ::mosek::fusion::LinearDomain > _3176_other);
      virtual monty::rc_ptr< ::mosek::fusion::SymmetricLinearDomain > __mosek_2fusion_2LinearDomain__symmetric() ;
      virtual monty::rc_ptr< ::mosek::fusion::LinearDomain > __mosek_2fusion_2LinearDomain__sparse(std::shared_ptr< monty::ndarray< int32_t,2 > > _3178_sparsity) ;
      virtual monty::rc_ptr< ::mosek::fusion::LinearDomain > __mosek_2fusion_2LinearDomain__sparse(std::shared_ptr< monty::ndarray< int32_t,1 > > _3181_sparsity) ;
      virtual monty::rc_ptr< ::mosek::fusion::LinearDomain > __mosek_2fusion_2LinearDomain__sparse() ;
      virtual monty::rc_ptr< ::mosek::fusion::LinearDomain > __mosek_2fusion_2LinearDomain__integral() ;
      virtual monty::rc_ptr< ::mosek::fusion::LinearDomain > __mosek_2fusion_2LinearDomain__withShape(int32_t _3183_dim0,int32_t _3184_dim1,int32_t _3185_dim2) ;
      virtual monty::rc_ptr< ::mosek::fusion::LinearDomain > __mosek_2fusion_2LinearDomain__withShape(int32_t _3186_dim0,int32_t _3187_dim1) ;
      virtual monty::rc_ptr< ::mosek::fusion::LinearDomain > __mosek_2fusion_2LinearDomain__withShape(int32_t _3188_dim0) ;
      virtual monty::rc_ptr< ::mosek::fusion::LinearDomain > __mosek_2fusion_2LinearDomain__withShape(std::shared_ptr< monty::ndarray< int32_t,1 > > _3189_shp) ;
      virtual monty::rc_ptr< ::mosek::fusion::LinearDomain > __mosek_2fusion_2LinearDomain__withNamesOnAxis(std::shared_ptr< monty::ndarray< std::string,1 > > _3190_names,int32_t _3191_axis) ;
      virtual bool match_shape(std::shared_ptr< monty::ndarray< int32_t,1 > > _3198_shp) ;
      virtual void finalize_and_validate(std::shared_ptr< monty::ndarray< int32_t,1 > > _3200_shp) ;
    }; // struct LinearDomain;

    struct p_Domain
    {
      Domain * _pubthis;
      static mosek::fusion::p_Domain* _get_impl(mosek::fusion::Domain * _inst){ assert(_inst); assert(_inst->_impl); return _inst->_impl; }
      static mosek::fusion::p_Domain * _get_impl(mosek::fusion::Domain::t _inst) { return _get_impl(_inst.get()); }
      p_Domain(Domain * _pubthis);
      virtual ~p_Domain() { /* std::cout << "~p_Domain" << std::endl;*/ };

      virtual void destroy();

      static  int64_t dimsize(std::shared_ptr< monty::ndarray< int32_t,1 > > _3208_dims);
      static  monty::rc_ptr< ::mosek::fusion::RangeDomain > mkRangedDomain(monty::rc_ptr< ::mosek::fusion::Matrix > _3211_lb,monty::rc_ptr< ::mosek::fusion::Matrix > _3212_ub);
      static  monty::rc_ptr< ::mosek::fusion::RangeDomain > mkRangedDomain(std::shared_ptr< monty::ndarray< double,2 > > _3241_lb,std::shared_ptr< monty::ndarray< double,2 > > _3242_ub);
      static  monty::rc_ptr< ::mosek::fusion::LinearDomain > mkLinearDomain(mosek::fusion::RelationKey _3251_k,monty::rc_ptr< ::mosek::fusion::Matrix > _3252_mx);
      static  int64_t prod(std::shared_ptr< monty::ndarray< int32_t,1 > > _3258_dim);
      static  monty::rc_ptr< ::mosek::fusion::RangeDomain > inRange(bool _3261_scalable,std::shared_ptr< monty::ndarray< double,1 > > _3262_lb,std::shared_ptr< monty::ndarray< double,1 > > _3263_ub,std::shared_ptr< monty::ndarray< int32_t,2 > > _3264_sp,std::shared_ptr< monty::ndarray< int32_t,1 > > _3265_dims);
      static  monty::rc_ptr< ::mosek::fusion::SymmetricRangeDomain > symmetric(monty::rc_ptr< ::mosek::fusion::RangeDomain > _3267_rd);
      static  monty::rc_ptr< ::mosek::fusion::SymmetricLinearDomain > symmetric(monty::rc_ptr< ::mosek::fusion::LinearDomain > _3268_ld);
      static  monty::rc_ptr< ::mosek::fusion::RangeDomain > sparse(monty::rc_ptr< ::mosek::fusion::RangeDomain > _3269_rd,std::shared_ptr< monty::ndarray< int32_t,2 > > _3270_sparsity);
      static  monty::rc_ptr< ::mosek::fusion::RangeDomain > sparse(monty::rc_ptr< ::mosek::fusion::RangeDomain > _3271_rd,std::shared_ptr< monty::ndarray< int32_t,1 > > _3272_sparsity);
      static  monty::rc_ptr< ::mosek::fusion::LinearDomain > sparse(monty::rc_ptr< ::mosek::fusion::LinearDomain > _3273_ld,std::shared_ptr< monty::ndarray< int32_t,2 > > _3274_sparsity);
      static  monty::rc_ptr< ::mosek::fusion::LinearDomain > sparse(monty::rc_ptr< ::mosek::fusion::LinearDomain > _3275_ld,std::shared_ptr< monty::ndarray< int32_t,1 > > _3276_sparsity);
      static  monty::rc_ptr< ::mosek::fusion::RangeDomain > integral(monty::rc_ptr< ::mosek::fusion::RangeDomain > _3277_rd);
      static  monty::rc_ptr< ::mosek::fusion::LinearDomain > integral(monty::rc_ptr< ::mosek::fusion::LinearDomain > _3278_ld);
      static  monty::rc_ptr< ::mosek::fusion::ConeDomain > integral(monty::rc_ptr< ::mosek::fusion::ConeDomain > _3279_c);
      static  monty::rc_ptr< ::mosek::fusion::ConeDomain > axis(monty::rc_ptr< ::mosek::fusion::ConeDomain > _3280_c,int32_t _3281_a);
      static  monty::rc_ptr< ::mosek::fusion::ConeDomain > inDPowerCone(std::shared_ptr< monty::ndarray< double,1 > > _3282_alphas,std::shared_ptr< monty::ndarray< int32_t,1 > > _3283_dims);
      static  monty::rc_ptr< ::mosek::fusion::ConeDomain > inDPowerCone(std::shared_ptr< monty::ndarray< double,1 > > _3285_alphas,int32_t _3286_m);
      static  monty::rc_ptr< ::mosek::fusion::ConeDomain > inDPowerCone(std::shared_ptr< monty::ndarray< double,1 > > _3287_alphas);
      static  monty::rc_ptr< ::mosek::fusion::ConeDomain > inDPowerCone(double _3288_alpha,std::shared_ptr< monty::ndarray< int32_t,1 > > _3289_dims);
      static  monty::rc_ptr< ::mosek::fusion::ConeDomain > inDPowerCone(double _3291_alpha,int32_t _3292_m);
      static  monty::rc_ptr< ::mosek::fusion::ConeDomain > inDPowerCone(double _3293_alpha);
      static  monty::rc_ptr< ::mosek::fusion::ConeDomain > inPPowerCone(std::shared_ptr< monty::ndarray< double,1 > > _3294_alphas,std::shared_ptr< monty::ndarray< int32_t,1 > > _3295_dims);
      static  monty::rc_ptr< ::mosek::fusion::ConeDomain > inPPowerCone(std::shared_ptr< monty::ndarray< double,1 > > _3297_alphas,int32_t _3298_m);
      static  monty::rc_ptr< ::mosek::fusion::ConeDomain > inPPowerCone(std::shared_ptr< monty::ndarray< double,1 > > _3299_alphas);
      static  monty::rc_ptr< ::mosek::fusion::ConeDomain > inPPowerCone(double _3300_alpha,std::shared_ptr< monty::ndarray< int32_t,1 > > _3301_dims);
      static  monty::rc_ptr< ::mosek::fusion::ConeDomain > inPPowerCone(double _3303_alpha,int32_t _3304_m);
      static  monty::rc_ptr< ::mosek::fusion::ConeDomain > inPPowerCone(double _3305_alpha);
      static  monty::rc_ptr< ::mosek::fusion::ConeDomain > inDExpCone(std::shared_ptr< monty::ndarray< int32_t,1 > > _3306_dims);
      static  monty::rc_ptr< ::mosek::fusion::ConeDomain > inDExpCone(int32_t _3308_m);
      static  monty::rc_ptr< ::mosek::fusion::ConeDomain > inDExpCone();
      static  monty::rc_ptr< ::mosek::fusion::ConeDomain > inPExpCone(std::shared_ptr< monty::ndarray< int32_t,1 > > _3309_dims);
      static  monty::rc_ptr< ::mosek::fusion::ConeDomain > inPExpCone(int32_t _3311_m);
      static  monty::rc_ptr< ::mosek::fusion::ConeDomain > inPExpCone();
      static  monty::rc_ptr< ::mosek::fusion::ConeDomain > inDGeoMeanCone(std::shared_ptr< monty::ndarray< int32_t,1 > > _3312_dims);
      static  monty::rc_ptr< ::mosek::fusion::ConeDomain > inDGeoMeanCone(int32_t _3314_m,int32_t _3315_n);
      static  monty::rc_ptr< ::mosek::fusion::ConeDomain > inDGeoMeanCone(int32_t _3316_n);
      static  monty::rc_ptr< ::mosek::fusion::ConeDomain > inDGeoMeanCone();
      static  monty::rc_ptr< ::mosek::fusion::ConeDomain > inPGeoMeanCone(std::shared_ptr< monty::ndarray< int32_t,1 > > _3317_dims);
      static  monty::rc_ptr< ::mosek::fusion::ConeDomain > inPGeoMeanCone(int32_t _3319_m,int32_t _3320_n);
      static  monty::rc_ptr< ::mosek::fusion::ConeDomain > inPGeoMeanCone(int32_t _3321_n);
      static  monty::rc_ptr< ::mosek::fusion::ConeDomain > inPGeoMeanCone();
      static  monty::rc_ptr< ::mosek::fusion::ConeDomain > inRotatedQCone(std::shared_ptr< monty::ndarray< int32_t,1 > > _3322_dims);
      static  monty::rc_ptr< ::mosek::fusion::ConeDomain > inRotatedQCone(int32_t _3324_m,int32_t _3325_n);
      static  monty::rc_ptr< ::mosek::fusion::ConeDomain > inRotatedQCone(int32_t _3326_n);
      static  monty::rc_ptr< ::mosek::fusion::ConeDomain > inRotatedQCone();
      static  monty::rc_ptr< ::mosek::fusion::ConeDomain > inQCone(std::shared_ptr< monty::ndarray< int32_t,1 > > _3327_dims);
      static  monty::rc_ptr< ::mosek::fusion::ConeDomain > inQCone(int32_t _3329_m,int32_t _3330_n);
      static  monty::rc_ptr< ::mosek::fusion::ConeDomain > inQCone(int32_t _3331_n);
      static  monty::rc_ptr< ::mosek::fusion::ConeDomain > inQCone();
      static  monty::rc_ptr< ::mosek::fusion::ConeDomain > inSVecPSDCone(std::shared_ptr< monty::ndarray< int32_t,1 > > _3332_dims);
      static  monty::rc_ptr< ::mosek::fusion::ConeDomain > inSVecPSDCone(int32_t _3333_d1,int32_t _3334_d2);
      static  monty::rc_ptr< ::mosek::fusion::ConeDomain > inSVecPSDCone(int32_t _3335_n);
      static  monty::rc_ptr< ::mosek::fusion::ConeDomain > inSVecPSDCone();
      static  monty::rc_ptr< ::mosek::fusion::PSDDomain > isTrilPSD(int32_t _3336_n,int32_t _3337_m);
      static  monty::rc_ptr< ::mosek::fusion::PSDDomain > isTrilPSD(int32_t _3338_n);
      static  monty::rc_ptr< ::mosek::fusion::PSDDomain > isTrilPSD();
      static  monty::rc_ptr< ::mosek::fusion::PSDDomain > inPSDCone(int32_t _3339_n,int32_t _3340_m);
      static  monty::rc_ptr< ::mosek::fusion::PSDDomain > inPSDCone(int32_t _3341_n);
      static  monty::rc_ptr< ::mosek::fusion::PSDDomain > inPSDCone();
      static  monty::rc_ptr< ::mosek::fusion::RangeDomain > binary();
      static  monty::rc_ptr< ::mosek::fusion::RangeDomain > binary(std::shared_ptr< monty::ndarray< int32_t,1 > > _3342_dims);
      static  monty::rc_ptr< ::mosek::fusion::RangeDomain > binary(int32_t _3343_m,int32_t _3344_n);
      static  monty::rc_ptr< ::mosek::fusion::RangeDomain > binary(int32_t _3345_n);
      static  monty::rc_ptr< ::mosek::fusion::RangeDomain > inRange(monty::rc_ptr< ::mosek::fusion::Matrix > _3346_lbm,monty::rc_ptr< ::mosek::fusion::Matrix > _3347_ubm);
      static  monty::rc_ptr< ::mosek::fusion::RangeDomain > inRange(std::shared_ptr< monty::ndarray< double,2 > > _3348_lba,std::shared_ptr< monty::ndarray< double,2 > > _3349_uba);
      static  monty::rc_ptr< ::mosek::fusion::RangeDomain > inRange(std::shared_ptr< monty::ndarray< double,1 > > _3350_lba,std::shared_ptr< monty::ndarray< double,1 > > _3351_uba,std::shared_ptr< monty::ndarray< int32_t,1 > > _3352_dims);
      static  monty::rc_ptr< ::mosek::fusion::RangeDomain > inRange(std::shared_ptr< monty::ndarray< double,1 > > _3353_lba,double _3354_ub,std::shared_ptr< monty::ndarray< int32_t,1 > > _3355_dims);
      static  monty::rc_ptr< ::mosek::fusion::RangeDomain > inRange(double _3357_lb,std::shared_ptr< monty::ndarray< double,1 > > _3358_uba,std::shared_ptr< monty::ndarray< int32_t,1 > > _3359_dims);
      static  monty::rc_ptr< ::mosek::fusion::RangeDomain > inRange(double _3361_lb,double _3362_ub,std::shared_ptr< monty::ndarray< int32_t,1 > > _3363_dims);
      static  monty::rc_ptr< ::mosek::fusion::RangeDomain > inRange(std::shared_ptr< monty::ndarray< double,1 > > _3364_lba,std::shared_ptr< monty::ndarray< double,1 > > _3365_uba);
      static  monty::rc_ptr< ::mosek::fusion::RangeDomain > inRange(std::shared_ptr< monty::ndarray< double,1 > > _3366_lba,double _3367_ub);
      static  monty::rc_ptr< ::mosek::fusion::RangeDomain > inRange(double _3369_lb,std::shared_ptr< monty::ndarray< double,1 > > _3370_uba);
      static  monty::rc_ptr< ::mosek::fusion::RangeDomain > inRange(double _3372_lb,double _3373_ub);
      static  monty::rc_ptr< ::mosek::fusion::LinearDomain > greaterThan(monty::rc_ptr< ::mosek::fusion::Matrix > _3374_mx);
      static  monty::rc_ptr< ::mosek::fusion::LinearDomain > greaterThan(std::shared_ptr< monty::ndarray< double,1 > > _3375_a1,std::shared_ptr< monty::ndarray< int32_t,1 > > _3376_dims);
      static  monty::rc_ptr< ::mosek::fusion::LinearDomain > greaterThan(std::shared_ptr< monty::ndarray< double,2 > > _3377_a2);
      static  monty::rc_ptr< ::mosek::fusion::LinearDomain > greaterThan(std::shared_ptr< monty::ndarray< double,1 > > _3380_a1);
      static  monty::rc_ptr< ::mosek::fusion::LinearDomain > greaterThan(double _3381_b,std::shared_ptr< monty::ndarray< int32_t,1 > > _3382_dims);
      static  monty::rc_ptr< ::mosek::fusion::LinearDomain > greaterThan(double _3384_b,int32_t _3385_m,int32_t _3386_n);
      static  monty::rc_ptr< ::mosek::fusion::LinearDomain > greaterThan(double _3388_b,int32_t _3389_n);
      static  monty::rc_ptr< ::mosek::fusion::LinearDomain > greaterThan(double _3391_b);
      static  monty::rc_ptr< ::mosek::fusion::LinearDomain > lessThan(monty::rc_ptr< ::mosek::fusion::Matrix > _3392_mx);
      static  monty::rc_ptr< ::mosek::fusion::LinearDomain > lessThan(std::shared_ptr< monty::ndarray< double,1 > > _3393_a1,std::shared_ptr< monty::ndarray< int32_t,1 > > _3394_dims);
      static  monty::rc_ptr< ::mosek::fusion::LinearDomain > lessThan(std::shared_ptr< monty::ndarray< double,2 > > _3395_a2);
      static  monty::rc_ptr< ::mosek::fusion::LinearDomain > lessThan(std::shared_ptr< monty::ndarray< double,1 > > _3398_a1);
      static  monty::rc_ptr< ::mosek::fusion::LinearDomain > lessThan(double _3399_b,std::shared_ptr< monty::ndarray< int32_t,1 > > _3400_dims);
      static  monty::rc_ptr< ::mosek::fusion::LinearDomain > lessThan(double _3401_b,int32_t _3402_m,int32_t _3403_n);
      static  monty::rc_ptr< ::mosek::fusion::LinearDomain > lessThan(double _3404_b,int32_t _3405_n);
      static  monty::rc_ptr< ::mosek::fusion::LinearDomain > lessThan(double _3406_b);
      static  monty::rc_ptr< ::mosek::fusion::LinearDomain > equalsTo(monty::rc_ptr< ::mosek::fusion::Matrix > _3407_mx);
      static  monty::rc_ptr< ::mosek::fusion::LinearDomain > equalsTo(std::shared_ptr< monty::ndarray< double,1 > > _3408_a1,std::shared_ptr< monty::ndarray< int32_t,1 > > _3409_dims);
      static  monty::rc_ptr< ::mosek::fusion::LinearDomain > equalsTo(std::shared_ptr< monty::ndarray< double,2 > > _3410_a2);
      static  monty::rc_ptr< ::mosek::fusion::LinearDomain > equalsTo(std::shared_ptr< monty::ndarray< double,1 > > _3413_a1);
      static  monty::rc_ptr< ::mosek::fusion::LinearDomain > equalsTo(double _3414_b,std::shared_ptr< monty::ndarray< int32_t,1 > > _3415_dims);
      static  monty::rc_ptr< ::mosek::fusion::LinearDomain > equalsTo(double _3416_b,int32_t _3417_m,int32_t _3418_n);
      static  monty::rc_ptr< ::mosek::fusion::LinearDomain > equalsTo(double _3419_b,int32_t _3420_n);
      static  monty::rc_ptr< ::mosek::fusion::LinearDomain > equalsTo(double _3421_b);
      static  monty::rc_ptr< ::mosek::fusion::LinearDomain > unbounded(std::shared_ptr< monty::ndarray< int32_t,1 > > _3422_dims);
      static  monty::rc_ptr< ::mosek::fusion::LinearDomain > unbounded(int32_t _3424_m,int32_t _3425_n);
      static  monty::rc_ptr< ::mosek::fusion::LinearDomain > unbounded(int32_t _3426_n);
      static  monty::rc_ptr< ::mosek::fusion::LinearDomain > unbounded();
    }; // struct Domain;

    struct p_ExprCode
    {
      ExprCode * _pubthis;
      static mosek::fusion::p_ExprCode* _get_impl(mosek::fusion::ExprCode * _inst){ assert(_inst); assert(_inst->_impl); return _inst->_impl; }
      static mosek::fusion::p_ExprCode * _get_impl(mosek::fusion::ExprCode::t _inst) { return _get_impl(_inst.get()); }
      p_ExprCode(ExprCode * _pubthis);
      virtual ~p_ExprCode() { /* std::cout << "~p_ExprCode" << std::endl;*/ };

      virtual void destroy();

      static  void inplace_relocate(std::shared_ptr< monty::ndarray< int32_t,1 > > _3427_code,int32_t _3428_from_offset,int32_t _3429_num,int32_t _3430_const_base);
      static  std::string op2str(int32_t _3432_op);
      static  void eval_add_list(std::shared_ptr< monty::ndarray< int32_t,1 > > _3433_code,std::shared_ptr< monty::ndarray< int32_t,1 > > _3434_ptr,std::shared_ptr< monty::ndarray< double,1 > > _3435_consts,int32_t _3436_offset,std::shared_ptr< monty::ndarray< double,1 > > _3437_target,std::shared_ptr< monty::ndarray< double,1 > > _3438_P,monty::rc_ptr< ::mosek::fusion::WorkStack > _3439_xs);
      static  void eval_add_list(std::shared_ptr< monty::ndarray< int32_t,1 > > _3447_code,std::shared_ptr< monty::ndarray< int32_t,1 > > _3448_ptr,std::shared_ptr< monty::ndarray< double,1 > > _3449_consts,std::shared_ptr< monty::ndarray< double,1 > > _3450_target,std::shared_ptr< monty::ndarray< double,1 > > _3451_P,monty::rc_ptr< ::mosek::fusion::WorkStack > _3452_xs);
      static  int32_t emit_sum(std::shared_ptr< monty::ndarray< int32_t,1 > > _3453_tgt,int32_t _3454_ofs,int32_t _3455_num);
      static  int32_t emit_inv(std::shared_ptr< monty::ndarray< int32_t,1 > > _3456_tgt,int32_t _3457_ofs);
      static  int32_t emit_mul(std::shared_ptr< monty::ndarray< int32_t,1 > > _3458_tgt,int32_t _3459_ofs);
      static  int32_t emit_neg(std::shared_ptr< monty::ndarray< int32_t,1 > > _3460_tgt,int32_t _3461_ofs);
      static  int32_t emit_add(std::shared_ptr< monty::ndarray< int32_t,1 > > _3462_tgt,int32_t _3463_ofs);
      static  int32_t emit_constref(std::shared_ptr< monty::ndarray< int32_t,1 > > _3464_tgt,int32_t _3465_ofs,int32_t _3466_i);
      static  int32_t emit_paramref(std::shared_ptr< monty::ndarray< int32_t,1 > > _3467_tgt,int32_t _3468_ofs,int32_t _3469_i);
      static  int32_t emit_nop(std::shared_ptr< monty::ndarray< int32_t,1 > > _3470_tgt,int32_t _3471_ofs);
    }; // struct ExprCode;

    struct p_Param
    {
      Param * _pubthis;
      static mosek::fusion::p_Param* _get_impl(mosek::fusion::Param * _inst){ assert(_inst); assert(_inst->_impl); return _inst->_impl; }
      static mosek::fusion::p_Param * _get_impl(mosek::fusion::Param::t _inst) { return _get_impl(_inst.get()); }
      p_Param(Param * _pubthis);
      virtual ~p_Param() { /* std::cout << "~p_Param" << std::endl;*/ };

      virtual void destroy();

      static  monty::rc_ptr< ::mosek::fusion::Parameter > repeat(monty::rc_ptr< ::mosek::fusion::Parameter > _3480_p,int32_t _3481_n,int32_t _3482_dim);
      static  monty::rc_ptr< ::mosek::fusion::Parameter > stack(int32_t _3484_dim,monty::rc_ptr< ::mosek::fusion::Parameter > _3485_p1,monty::rc_ptr< ::mosek::fusion::Parameter > _3486_p2,monty::rc_ptr< ::mosek::fusion::Parameter > _3487_p3);
      static  monty::rc_ptr< ::mosek::fusion::Parameter > stack(int32_t _3488_dim,monty::rc_ptr< ::mosek::fusion::Parameter > _3489_p1,monty::rc_ptr< ::mosek::fusion::Parameter > _3490_p2);
      static  monty::rc_ptr< ::mosek::fusion::Parameter > stack(int32_t _3491_dim,std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::Parameter >,1 > > _3492_p);
      static  monty::rc_ptr< ::mosek::fusion::Parameter > stack(std::shared_ptr< monty::ndarray< std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::Parameter >,1 > >,1 > > _3493_p);
      static  monty::rc_ptr< ::mosek::fusion::Parameter > hstack(monty::rc_ptr< ::mosek::fusion::Parameter > _3495_p1,monty::rc_ptr< ::mosek::fusion::Parameter > _3496_p2,monty::rc_ptr< ::mosek::fusion::Parameter > _3497_p3);
      static  monty::rc_ptr< ::mosek::fusion::Parameter > hstack(monty::rc_ptr< ::mosek::fusion::Parameter > _3498_p1,monty::rc_ptr< ::mosek::fusion::Parameter > _3499_p2);
      static  monty::rc_ptr< ::mosek::fusion::Parameter > hstack(std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::Parameter >,1 > > _3500_p);
      static  monty::rc_ptr< ::mosek::fusion::Parameter > vstack(monty::rc_ptr< ::mosek::fusion::Parameter > _3501_p1,monty::rc_ptr< ::mosek::fusion::Parameter > _3502_p2,monty::rc_ptr< ::mosek::fusion::Parameter > _3503_p3);
      static  monty::rc_ptr< ::mosek::fusion::Parameter > vstack(monty::rc_ptr< ::mosek::fusion::Parameter > _3504_p1,monty::rc_ptr< ::mosek::fusion::Parameter > _3505_p2);
      static  monty::rc_ptr< ::mosek::fusion::Parameter > vstack(std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::Parameter >,1 > > _3506_p);
      static  monty::rc_ptr< ::mosek::fusion::Parameter > dstack(std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::Parameter >,1 > > _3507_p,int32_t _3508_dim);
    }; // struct Param;

    struct p_ParameterImpl : public /*implements*/ virtual ::mosek::fusion::Parameter
    {
      ParameterImpl * _pubthis;
      static mosek::fusion::p_ParameterImpl* _get_impl(mosek::fusion::ParameterImpl * _inst){ assert(_inst); assert(_inst->_impl); return _inst->_impl; }
      static mosek::fusion::p_ParameterImpl * _get_impl(mosek::fusion::ParameterImpl::t _inst) { return _get_impl(_inst.get()); }
      p_ParameterImpl(ParameterImpl * _pubthis);
      virtual ~p_ParameterImpl() { /* std::cout << "~p_ParameterImpl" << std::endl;*/ };
      int64_t size{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > nidxs{};
      std::shared_ptr< monty::ndarray< int64_t,1 > > sp{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > shape{};
      monty::rc_ptr< ::mosek::fusion::Model > model{};

      virtual void destroy();

      static ParameterImpl::t _new_ParameterImpl(monty::rc_ptr< ::mosek::fusion::ParameterImpl > _4297_other,monty::rc_ptr< ::mosek::fusion::Model > _4298_model);
      void _initialize(monty::rc_ptr< ::mosek::fusion::ParameterImpl > _4297_other,monty::rc_ptr< ::mosek::fusion::Model > _4298_model);
      static ParameterImpl::t _new_ParameterImpl(monty::rc_ptr< ::mosek::fusion::Model > _4299_model,std::shared_ptr< monty::ndarray< int32_t,1 > > _4300_shape,std::shared_ptr< monty::ndarray< int64_t,1 > > _4301_sp,std::shared_ptr< monty::ndarray< int32_t,1 > > _4302_nidxs);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Model > _4299_model,std::shared_ptr< monty::ndarray< int32_t,1 > > _4300_shape,std::shared_ptr< monty::ndarray< int64_t,1 > > _4301_sp,std::shared_ptr< monty::ndarray< int32_t,1 > > _4302_nidxs);
      virtual monty::rc_ptr< ::mosek::fusion::Parameter > __mosek_2fusion_2ParameterImpl__clone(monty::rc_ptr< ::mosek::fusion::Model > _4303_m) ;
      virtual monty::rc_ptr< ::mosek::fusion::Parameter > __mosek_2fusion_2Parameter__clone(monty::rc_ptr< ::mosek::fusion::Model > _4303_m) { return __mosek_2fusion_2ParameterImpl__clone(_4303_m); }
      virtual /* override */ std::string toString() ;
      virtual monty::rc_ptr< ::mosek::fusion::Expression > __mosek_2fusion_2ParameterImpl__pick(std::shared_ptr< monty::ndarray< int32_t,2 > > _4306_indexrows) ;
      virtual monty::rc_ptr< ::mosek::fusion::Expression > __mosek_2fusion_2Expression__pick(std::shared_ptr< monty::ndarray< int32_t,2 > > _4306_indexrows) { return __mosek_2fusion_2ParameterImpl__pick(_4306_indexrows); }
      virtual monty::rc_ptr< ::mosek::fusion::Expression > __mosek_2fusion_2ParameterImpl__pick(std::shared_ptr< monty::ndarray< int32_t,1 > > _4307_indexes) ;
      virtual monty::rc_ptr< ::mosek::fusion::Expression > __mosek_2fusion_2Expression__pick(std::shared_ptr< monty::ndarray< int32_t,1 > > _4307_indexes) { return __mosek_2fusion_2ParameterImpl__pick(_4307_indexes); }
      virtual monty::rc_ptr< ::mosek::fusion::Expression > __mosek_2fusion_2ParameterImpl__index(std::shared_ptr< monty::ndarray< int32_t,1 > > _4308_indexes) ;
      virtual monty::rc_ptr< ::mosek::fusion::Expression > __mosek_2fusion_2Expression__index(std::shared_ptr< monty::ndarray< int32_t,1 > > _4308_indexes) { return __mosek_2fusion_2ParameterImpl__index(_4308_indexes); }
      virtual monty::rc_ptr< ::mosek::fusion::Expression > __mosek_2fusion_2ParameterImpl__index(int32_t _4317_i) ;
      virtual monty::rc_ptr< ::mosek::fusion::Expression > __mosek_2fusion_2Expression__index(int32_t _4317_i) { return __mosek_2fusion_2ParameterImpl__index(_4317_i); }
      virtual void eval(monty::rc_ptr< ::mosek::fusion::WorkStack > _4319_rs,monty::rc_ptr< ::mosek::fusion::WorkStack > _4320_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _4321_xs) ;
      virtual void getSp(std::shared_ptr< monty::ndarray< int64_t,1 > > _4343_dest,int32_t _4344_offset) ;
      virtual bool isSparse() ;
      virtual monty::rc_ptr< ::mosek::fusion::Parameter > __mosek_2fusion_2ParameterImpl__slice(std::shared_ptr< monty::ndarray< int32_t,1 > > _4347_astart,std::shared_ptr< monty::ndarray< int32_t,1 > > _4348_astop) ;
      virtual monty::rc_ptr< ::mosek::fusion::Parameter > __mosek_2fusion_2Parameter__slice(std::shared_ptr< monty::ndarray< int32_t,1 > > _4347_astart,std::shared_ptr< monty::ndarray< int32_t,1 > > _4348_astop) { return __mosek_2fusion_2ParameterImpl__slice(_4347_astart,_4348_astop); }
      virtual monty::rc_ptr< ::mosek::fusion::Parameter > __mosek_2fusion_2ParameterImpl__slice(int32_t _4380_start,int32_t _4381_stop) ;
      virtual monty::rc_ptr< ::mosek::fusion::Parameter > __mosek_2fusion_2Parameter__slice(int32_t _4380_start,int32_t _4381_stop) { return __mosek_2fusion_2ParameterImpl__slice(_4380_start,_4381_stop); }
      virtual monty::rc_ptr< ::mosek::fusion::Parameter > __mosek_2fusion_2ParameterImpl__reshape(std::shared_ptr< monty::ndarray< int32_t,1 > > _4389_dims) ;
      virtual monty::rc_ptr< ::mosek::fusion::Parameter > __mosek_2fusion_2Parameter__reshape(std::shared_ptr< monty::ndarray< int32_t,1 > > _4389_dims) { return __mosek_2fusion_2ParameterImpl__reshape(_4389_dims); }
      virtual monty::rc_ptr< ::mosek::fusion::Expression > __mosek_2fusion_2ParameterImpl__asExpr() ;
      virtual monty::rc_ptr< ::mosek::fusion::Expression > __mosek_2fusion_2Parameter__asExpr() { return __mosek_2fusion_2ParameterImpl__asExpr(); }
      virtual int64_t getSize() ;
      virtual int32_t getNumNonzero() ;
      virtual int32_t getND() ;
      virtual std::shared_ptr< monty::ndarray< int32_t,1 > > getShape() ;
      virtual int32_t getDim(int32_t _4390_i) ;
      virtual void getAllIndexes(std::shared_ptr< monty::ndarray< int32_t,1 > > _4391_dst,int32_t _4392_ofs) ;
      virtual int32_t getIndex(int32_t _4394_i) ;
      virtual std::shared_ptr< monty::ndarray< double,1 > > getValue() ;
      virtual void setValue(std::shared_ptr< monty::ndarray< double,2 > > _4395_values2) ;
      virtual void setValue(std::shared_ptr< monty::ndarray< double,1 > > _4401_values) ;
      virtual void setValue(double _4404_value) ;
      virtual monty::rc_ptr< ::mosek::fusion::Model > __mosek_2fusion_2ParameterImpl__getModel() ;
      virtual monty::rc_ptr< ::mosek::fusion::Model > __mosek_2fusion_2Parameter__getModel() { return __mosek_2fusion_2ParameterImpl__getModel(); }
    }; // struct ParameterImpl;

    struct p_BaseExpression : public /*implements*/ virtual ::mosek::fusion::Expression
    {
      BaseExpression * _pubthis;
      static mosek::fusion::p_BaseExpression* _get_impl(mosek::fusion::BaseExpression * _inst){ assert(_inst); assert(_inst->_impl); return _inst->_impl; }
      static mosek::fusion::p_BaseExpression * _get_impl(mosek::fusion::BaseExpression::t _inst) { return _get_impl(_inst.get()); }
      p_BaseExpression(BaseExpression * _pubthis);
      virtual ~p_BaseExpression() { /* std::cout << "~p_BaseExpression" << std::endl;*/ };
      std::shared_ptr< monty::ndarray< int32_t,1 > > shape{};

      virtual void destroy();

      static BaseExpression::t _new_BaseExpression(std::shared_ptr< monty::ndarray< int32_t,1 > > _7106_shape);
      void _initialize(std::shared_ptr< monty::ndarray< int32_t,1 > > _7106_shape);
      virtual /* override */ std::string toString() ;
      virtual void printStack(monty::rc_ptr< ::mosek::fusion::WorkStack > _7107_rs) ;
      virtual void eval(monty::rc_ptr< ::mosek::fusion::WorkStack > _7133_rs,monty::rc_ptr< ::mosek::fusion::WorkStack > _7134_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _7135_xs) { throw monty::AbstractClassError("Call to abstract method"); }
      virtual monty::rc_ptr< ::mosek::fusion::Expression > __mosek_2fusion_2BaseExpression__pick(std::shared_ptr< monty::ndarray< int32_t,2 > > _7136_indexrows) ;
      virtual monty::rc_ptr< ::mosek::fusion::Expression > __mosek_2fusion_2Expression__pick(std::shared_ptr< monty::ndarray< int32_t,2 > > _7136_indexrows) { return __mosek_2fusion_2BaseExpression__pick(_7136_indexrows); }
      virtual monty::rc_ptr< ::mosek::fusion::Expression > __mosek_2fusion_2BaseExpression__pick(std::shared_ptr< monty::ndarray< int32_t,1 > > _7137_indexes) ;
      virtual monty::rc_ptr< ::mosek::fusion::Expression > __mosek_2fusion_2Expression__pick(std::shared_ptr< monty::ndarray< int32_t,1 > > _7137_indexes) { return __mosek_2fusion_2BaseExpression__pick(_7137_indexes); }
      virtual monty::rc_ptr< ::mosek::fusion::Expression > __mosek_2fusion_2BaseExpression__index(std::shared_ptr< monty::ndarray< int32_t,1 > > _7140_indexes) ;
      virtual monty::rc_ptr< ::mosek::fusion::Expression > __mosek_2fusion_2Expression__index(std::shared_ptr< monty::ndarray< int32_t,1 > > _7140_indexes) { return __mosek_2fusion_2BaseExpression__index(_7140_indexes); }
      virtual monty::rc_ptr< ::mosek::fusion::Expression > __mosek_2fusion_2BaseExpression__index(int32_t _7143_i) ;
      virtual monty::rc_ptr< ::mosek::fusion::Expression > __mosek_2fusion_2Expression__index(int32_t _7143_i) { return __mosek_2fusion_2BaseExpression__index(_7143_i); }
      virtual monty::rc_ptr< ::mosek::fusion::Expression > __mosek_2fusion_2BaseExpression__slice(std::shared_ptr< monty::ndarray< int32_t,1 > > _7145_firsta,std::shared_ptr< monty::ndarray< int32_t,1 > > _7146_lasta) ;
      virtual monty::rc_ptr< ::mosek::fusion::Expression > __mosek_2fusion_2Expression__slice(std::shared_ptr< monty::ndarray< int32_t,1 > > _7145_firsta,std::shared_ptr< monty::ndarray< int32_t,1 > > _7146_lasta) { return __mosek_2fusion_2BaseExpression__slice(_7145_firsta,_7146_lasta); }
      virtual monty::rc_ptr< ::mosek::fusion::Expression > __mosek_2fusion_2BaseExpression__slice(int32_t _7147_first,int32_t _7148_last) ;
      virtual monty::rc_ptr< ::mosek::fusion::Expression > __mosek_2fusion_2Expression__slice(int32_t _7147_first,int32_t _7148_last) { return __mosek_2fusion_2BaseExpression__slice(_7147_first,_7148_last); }
      virtual int64_t getSize() ;
      virtual int32_t getND() ;
      virtual int32_t getDim(int32_t _7149_d) ;
      virtual std::shared_ptr< monty::ndarray< int32_t,1 > > getShape() ;
    }; // struct BaseExpression;

    struct p_ExprParameter : public ::mosek::fusion::p_BaseExpression
    {
      ExprParameter * _pubthis;
      static mosek::fusion::p_ExprParameter* _get_impl(mosek::fusion::ExprParameter * _inst){ return static_cast< mosek::fusion::p_ExprParameter* >(mosek::fusion::p_BaseExpression::_get_impl(_inst)); }
      static mosek::fusion::p_ExprParameter * _get_impl(mosek::fusion::ExprParameter::t _inst) { return _get_impl(_inst.get()); }
      p_ExprParameter(ExprParameter * _pubthis);
      virtual ~p_ExprParameter() { /* std::cout << "~p_ExprParameter" << std::endl;*/ };
      monty::rc_ptr< ::mosek::fusion::Parameter > p{};

      virtual void destroy();

      static ExprParameter::t _new_ExprParameter(monty::rc_ptr< ::mosek::fusion::Parameter > _3472_p);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Parameter > _3472_p);
      virtual /* override */ void eval(monty::rc_ptr< ::mosek::fusion::WorkStack > _3473_rs,monty::rc_ptr< ::mosek::fusion::WorkStack > _3474_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _3475_xs) ;
      virtual /* override */ monty::rc_ptr< ::mosek::fusion::Expression > __mosek_2fusion_2ExprParameter__slice(std::shared_ptr< monty::ndarray< int32_t,1 > > _3476_start,std::shared_ptr< monty::ndarray< int32_t,1 > > _3477_stop) ;
      virtual monty::rc_ptr< ::mosek::fusion::Expression > __mosek_2fusion_2BaseExpression__slice(std::shared_ptr< monty::ndarray< int32_t,1 > > _3476_start,std::shared_ptr< monty::ndarray< int32_t,1 > > _3477_stop) { return __mosek_2fusion_2ExprParameter__slice(_3476_start,_3477_stop); }
      virtual /* override */ monty::rc_ptr< ::mosek::fusion::Expression > __mosek_2fusion_2ExprParameter__slice(int32_t _3478_start,int32_t _3479_stop) ;
      virtual monty::rc_ptr< ::mosek::fusion::Expression > __mosek_2fusion_2BaseExpression__slice(int32_t _3478_start,int32_t _3479_stop) { return __mosek_2fusion_2ExprParameter__slice(_3478_start,_3479_stop); }
      virtual /* override */ std::string toString() ;
    }; // struct ExprParameter;

    struct p_ExprMulParamScalarExpr : public ::mosek::fusion::p_BaseExpression
    {
      ExprMulParamScalarExpr * _pubthis;
      static mosek::fusion::p_ExprMulParamScalarExpr* _get_impl(mosek::fusion::ExprMulParamScalarExpr * _inst){ return static_cast< mosek::fusion::p_ExprMulParamScalarExpr* >(mosek::fusion::p_BaseExpression::_get_impl(_inst)); }
      static mosek::fusion::p_ExprMulParamScalarExpr * _get_impl(mosek::fusion::ExprMulParamScalarExpr::t _inst) { return _get_impl(_inst.get()); }
      p_ExprMulParamScalarExpr(ExprMulParamScalarExpr * _pubthis);
      virtual ~p_ExprMulParamScalarExpr() { /* std::cout << "~p_ExprMulParamScalarExpr" << std::endl;*/ };
      monty::rc_ptr< ::mosek::fusion::Expression > e{};
      monty::rc_ptr< ::mosek::fusion::Parameter > p{};

      virtual void destroy();

      static ExprMulParamScalarExpr::t _new_ExprMulParamScalarExpr(monty::rc_ptr< ::mosek::fusion::Parameter > _3567_p,monty::rc_ptr< ::mosek::fusion::Expression > _3568_e);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Parameter > _3567_p,monty::rc_ptr< ::mosek::fusion::Expression > _3568_e);
      virtual /* override */ void eval(monty::rc_ptr< ::mosek::fusion::WorkStack > _3569_rs,monty::rc_ptr< ::mosek::fusion::WorkStack > _3570_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _3571_xs) ;
      virtual /* override */ std::string toString() ;
    }; // struct ExprMulParamScalarExpr;

    struct p_ExprMulParamScalar : public ::mosek::fusion::p_BaseExpression
    {
      ExprMulParamScalar * _pubthis;
      static mosek::fusion::p_ExprMulParamScalar* _get_impl(mosek::fusion::ExprMulParamScalar * _inst){ return static_cast< mosek::fusion::p_ExprMulParamScalar* >(mosek::fusion::p_BaseExpression::_get_impl(_inst)); }
      static mosek::fusion::p_ExprMulParamScalar * _get_impl(mosek::fusion::ExprMulParamScalar::t _inst) { return _get_impl(_inst.get()); }
      p_ExprMulParamScalar(ExprMulParamScalar * _pubthis);
      virtual ~p_ExprMulParamScalar() { /* std::cout << "~p_ExprMulParamScalar" << std::endl;*/ };
      monty::rc_ptr< ::mosek::fusion::Expression > e{};
      monty::rc_ptr< ::mosek::fusion::Parameter > p{};

      virtual void destroy();

      static ExprMulParamScalar::t _new_ExprMulParamScalar(monty::rc_ptr< ::mosek::fusion::Parameter > _3622_p,monty::rc_ptr< ::mosek::fusion::Expression > _3623_e);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Parameter > _3622_p,monty::rc_ptr< ::mosek::fusion::Expression > _3623_e);
      virtual /* override */ void eval(monty::rc_ptr< ::mosek::fusion::WorkStack > _3624_rs,monty::rc_ptr< ::mosek::fusion::WorkStack > _3625_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _3626_xs) ;
      virtual /* override */ std::string toString() ;
    }; // struct ExprMulParamScalar;

    struct p_ExprMulParamDiagLeft : public ::mosek::fusion::p_BaseExpression
    {
      ExprMulParamDiagLeft * _pubthis;
      static mosek::fusion::p_ExprMulParamDiagLeft* _get_impl(mosek::fusion::ExprMulParamDiagLeft * _inst){ return static_cast< mosek::fusion::p_ExprMulParamDiagLeft* >(mosek::fusion::p_BaseExpression::_get_impl(_inst)); }
      static mosek::fusion::p_ExprMulParamDiagLeft * _get_impl(mosek::fusion::ExprMulParamDiagLeft::t _inst) { return _get_impl(_inst.get()); }
      p_ExprMulParamDiagLeft(ExprMulParamDiagLeft * _pubthis);
      virtual ~p_ExprMulParamDiagLeft() { /* std::cout << "~p_ExprMulParamDiagLeft" << std::endl;*/ };
      monty::rc_ptr< ::mosek::fusion::Expression > e{};
      monty::rc_ptr< ::mosek::fusion::Parameter > p{};

      virtual void destroy();

      static ExprMulParamDiagLeft::t _new_ExprMulParamDiagLeft(monty::rc_ptr< ::mosek::fusion::Parameter > _3669_p,monty::rc_ptr< ::mosek::fusion::Expression > _3670_e);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Parameter > _3669_p,monty::rc_ptr< ::mosek::fusion::Expression > _3670_e);
      virtual /* override */ void eval(monty::rc_ptr< ::mosek::fusion::WorkStack > _3671_rs,monty::rc_ptr< ::mosek::fusion::WorkStack > _3672_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _3673_xs) ;
      virtual /* override */ std::string toString() ;
    }; // struct ExprMulParamDiagLeft;

    struct p_ExprMulParamDiagRight : public ::mosek::fusion::p_BaseExpression
    {
      ExprMulParamDiagRight * _pubthis;
      static mosek::fusion::p_ExprMulParamDiagRight* _get_impl(mosek::fusion::ExprMulParamDiagRight * _inst){ return static_cast< mosek::fusion::p_ExprMulParamDiagRight* >(mosek::fusion::p_BaseExpression::_get_impl(_inst)); }
      static mosek::fusion::p_ExprMulParamDiagRight * _get_impl(mosek::fusion::ExprMulParamDiagRight::t _inst) { return _get_impl(_inst.get()); }
      p_ExprMulParamDiagRight(ExprMulParamDiagRight * _pubthis);
      virtual ~p_ExprMulParamDiagRight() { /* std::cout << "~p_ExprMulParamDiagRight" << std::endl;*/ };
      monty::rc_ptr< ::mosek::fusion::Expression > e{};
      monty::rc_ptr< ::mosek::fusion::Parameter > p{};

      virtual void destroy();

      static ExprMulParamDiagRight::t _new_ExprMulParamDiagRight(monty::rc_ptr< ::mosek::fusion::Expression > _3788_e,monty::rc_ptr< ::mosek::fusion::Parameter > _3789_p);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Expression > _3788_e,monty::rc_ptr< ::mosek::fusion::Parameter > _3789_p);
      virtual /* override */ void eval(monty::rc_ptr< ::mosek::fusion::WorkStack > _3790_rs,monty::rc_ptr< ::mosek::fusion::WorkStack > _3791_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _3792_xs) ;
      virtual /* override */ std::string toString() ;
    }; // struct ExprMulParamDiagRight;

    struct p_ExprDotParam : public ::mosek::fusion::p_BaseExpression
    {
      ExprDotParam * _pubthis;
      static mosek::fusion::p_ExprDotParam* _get_impl(mosek::fusion::ExprDotParam * _inst){ return static_cast< mosek::fusion::p_ExprDotParam* >(mosek::fusion::p_BaseExpression::_get_impl(_inst)); }
      static mosek::fusion::p_ExprDotParam * _get_impl(mosek::fusion::ExprDotParam::t _inst) { return _get_impl(_inst.get()); }
      p_ExprDotParam(ExprDotParam * _pubthis);
      virtual ~p_ExprDotParam() { /* std::cout << "~p_ExprDotParam" << std::endl;*/ };
      monty::rc_ptr< ::mosek::fusion::Expression > e{};
      monty::rc_ptr< ::mosek::fusion::Parameter > p{};

      virtual void destroy();

      static ExprDotParam::t _new_ExprDotParam(monty::rc_ptr< ::mosek::fusion::Parameter > _3906_p,monty::rc_ptr< ::mosek::fusion::Expression > _3907_e);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Parameter > _3906_p,monty::rc_ptr< ::mosek::fusion::Expression > _3907_e);
      virtual /* override */ void eval(monty::rc_ptr< ::mosek::fusion::WorkStack > _3909_rs,monty::rc_ptr< ::mosek::fusion::WorkStack > _3910_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _3911_xs) ;
      virtual /* override */ std::string toString() ;
    }; // struct ExprDotParam;

    struct p_ExprMulParamElem : public ::mosek::fusion::p_BaseExpression
    {
      ExprMulParamElem * _pubthis;
      static mosek::fusion::p_ExprMulParamElem* _get_impl(mosek::fusion::ExprMulParamElem * _inst){ return static_cast< mosek::fusion::p_ExprMulParamElem* >(mosek::fusion::p_BaseExpression::_get_impl(_inst)); }
      static mosek::fusion::p_ExprMulParamElem * _get_impl(mosek::fusion::ExprMulParamElem::t _inst) { return _get_impl(_inst.get()); }
      p_ExprMulParamElem(ExprMulParamElem * _pubthis);
      virtual ~p_ExprMulParamElem() { /* std::cout << "~p_ExprMulParamElem" << std::endl;*/ };
      monty::rc_ptr< ::mosek::fusion::Expression > e{};
      monty::rc_ptr< ::mosek::fusion::Parameter > p{};

      virtual void destroy();

      static ExprMulParamElem::t _new_ExprMulParamElem(monty::rc_ptr< ::mosek::fusion::Parameter > _3969_p,monty::rc_ptr< ::mosek::fusion::Expression > _3970_e);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Parameter > _3969_p,monty::rc_ptr< ::mosek::fusion::Expression > _3970_e);
      virtual /* override */ void eval(monty::rc_ptr< ::mosek::fusion::WorkStack > _3972_rs,monty::rc_ptr< ::mosek::fusion::WorkStack > _3973_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _3974_xs) ;
      virtual /* override */ std::string toString() ;
    }; // struct ExprMulParamElem;

    struct p_ExprMulParamRight : public ::mosek::fusion::p_BaseExpression
    {
      ExprMulParamRight * _pubthis;
      static mosek::fusion::p_ExprMulParamRight* _get_impl(mosek::fusion::ExprMulParamRight * _inst){ return static_cast< mosek::fusion::p_ExprMulParamRight* >(mosek::fusion::p_BaseExpression::_get_impl(_inst)); }
      static mosek::fusion::p_ExprMulParamRight * _get_impl(mosek::fusion::ExprMulParamRight::t _inst) { return _get_impl(_inst.get()); }
      p_ExprMulParamRight(ExprMulParamRight * _pubthis);
      virtual ~p_ExprMulParamRight() { /* std::cout << "~p_ExprMulParamRight" << std::endl;*/ };
      monty::rc_ptr< ::mosek::fusion::Expression > e{};
      monty::rc_ptr< ::mosek::fusion::Parameter > p{};

      virtual void destroy();

      static ExprMulParamRight::t _new_ExprMulParamRight(monty::rc_ptr< ::mosek::fusion::Expression > _4036_e,monty::rc_ptr< ::mosek::fusion::Parameter > _4037_p);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Expression > _4036_e,monty::rc_ptr< ::mosek::fusion::Parameter > _4037_p);
      virtual /* override */ void eval(monty::rc_ptr< ::mosek::fusion::WorkStack > _4038_rs,monty::rc_ptr< ::mosek::fusion::WorkStack > _4039_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _4040_xs) ;
      virtual /* override */ std::string toString() ;
    }; // struct ExprMulParamRight;

    struct p_ExprMulParamLeft : public ::mosek::fusion::p_BaseExpression
    {
      ExprMulParamLeft * _pubthis;
      static mosek::fusion::p_ExprMulParamLeft* _get_impl(mosek::fusion::ExprMulParamLeft * _inst){ return static_cast< mosek::fusion::p_ExprMulParamLeft* >(mosek::fusion::p_BaseExpression::_get_impl(_inst)); }
      static mosek::fusion::p_ExprMulParamLeft * _get_impl(mosek::fusion::ExprMulParamLeft::t _inst) { return _get_impl(_inst.get()); }
      p_ExprMulParamLeft(ExprMulParamLeft * _pubthis);
      virtual ~p_ExprMulParamLeft() { /* std::cout << "~p_ExprMulParamLeft" << std::endl;*/ };
      monty::rc_ptr< ::mosek::fusion::Expression > e{};
      monty::rc_ptr< ::mosek::fusion::Parameter > p{};

      virtual void destroy();

      static ExprMulParamLeft::t _new_ExprMulParamLeft(monty::rc_ptr< ::mosek::fusion::Parameter > _4140_p,monty::rc_ptr< ::mosek::fusion::Expression > _4141_e);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Parameter > _4140_p,monty::rc_ptr< ::mosek::fusion::Expression > _4141_e);
      virtual /* override */ void eval(monty::rc_ptr< ::mosek::fusion::WorkStack > _4142_rs,monty::rc_ptr< ::mosek::fusion::WorkStack > _4143_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _4144_xs) ;
      virtual /* override */ std::string toString() ;
    }; // struct ExprMulParamLeft;

    struct p_ExprOptimizeCode : public ::mosek::fusion::p_BaseExpression
    {
      ExprOptimizeCode * _pubthis;
      static mosek::fusion::p_ExprOptimizeCode* _get_impl(mosek::fusion::ExprOptimizeCode * _inst){ return static_cast< mosek::fusion::p_ExprOptimizeCode* >(mosek::fusion::p_BaseExpression::_get_impl(_inst)); }
      static mosek::fusion::p_ExprOptimizeCode * _get_impl(mosek::fusion::ExprOptimizeCode::t _inst) { return _get_impl(_inst.get()); }
      p_ExprOptimizeCode(ExprOptimizeCode * _pubthis);
      virtual ~p_ExprOptimizeCode() { /* std::cout << "~p_ExprOptimizeCode" << std::endl;*/ };
      monty::rc_ptr< ::mosek::fusion::Expression > expr{};

      virtual void destroy();

      static ExprOptimizeCode::t _new_ExprOptimizeCode(monty::rc_ptr< ::mosek::fusion::Expression > _4422_expr);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Expression > _4422_expr);
      static  void compress_code(monty::rc_ptr< ::mosek::fusion::WorkStack > _4423_xs,int32_t _4424_n,std::shared_ptr< monty::ndarray< int32_t,1 > > _4425_code,int32_t _4426_code_base,std::shared_ptr< monty::ndarray< int32_t,1 > > _4427_ptr,int32_t _4428_ptr_base,std::shared_ptr< monty::ndarray< double,1 > > _4429_fixterm,int32_t _4430_fixterm_base,std::shared_ptr< monty::ndarray< double,1 > > _4431_code_consts,int32_t _4432_code_consts_base,int32_t _4433_target_code_base,int32_t _4434_target_const_base,int32_t _4435_target_ptr_base);
      virtual /* override */ void eval(monty::rc_ptr< ::mosek::fusion::WorkStack > _4488_rs,monty::rc_ptr< ::mosek::fusion::WorkStack > _4489_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _4490_xs) ;
      virtual /* override */ std::string toString() ;
    }; // struct ExprOptimizeCode;

    struct p_ExprCompress : public ::mosek::fusion::p_BaseExpression
    {
      ExprCompress * _pubthis;
      static mosek::fusion::p_ExprCompress* _get_impl(mosek::fusion::ExprCompress * _inst){ return static_cast< mosek::fusion::p_ExprCompress* >(mosek::fusion::p_BaseExpression::_get_impl(_inst)); }
      static mosek::fusion::p_ExprCompress * _get_impl(mosek::fusion::ExprCompress::t _inst) { return _get_impl(_inst.get()); }
      p_ExprCompress(ExprCompress * _pubthis);
      virtual ~p_ExprCompress() { /* std::cout << "~p_ExprCompress" << std::endl;*/ };
      monty::rc_ptr< ::mosek::fusion::Expression > expr{};

      virtual void destroy();

      static ExprCompress::t _new_ExprCompress(monty::rc_ptr< ::mosek::fusion::Expression > _4557_expr);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Expression > _4557_expr);
      static  void arg_sort(monty::rc_ptr< ::mosek::fusion::WorkStack > _4558_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _4559_xs,int32_t _4560_perm,int32_t _4561_nelem,int32_t _4562_nnz,int32_t _4563_ptr,int32_t _4564_nidxs);
      static  void merge_sort(int32_t _4600_origperm1,int32_t _4601_origperm2,int32_t _4602_nelem,int32_t _4603_nnz,int32_t _4604_ptr_base,int32_t _4605_nidxs_base,std::shared_ptr< monty::ndarray< int32_t,1 > > _4606_wi32,std::shared_ptr< monty::ndarray< int64_t,1 > > _4607_wi64);
      virtual /* override */ void eval(monty::rc_ptr< ::mosek::fusion::WorkStack > _4630_rs,monty::rc_ptr< ::mosek::fusion::WorkStack > _4631_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _4632_xs) ;
      virtual /* override */ std::string toString() ;
    }; // struct ExprCompress;

    struct p_ExprConst : public ::mosek::fusion::p_BaseExpression
    {
      ExprConst * _pubthis;
      static mosek::fusion::p_ExprConst* _get_impl(mosek::fusion::ExprConst * _inst){ return static_cast< mosek::fusion::p_ExprConst* >(mosek::fusion::p_BaseExpression::_get_impl(_inst)); }
      static mosek::fusion::p_ExprConst * _get_impl(mosek::fusion::ExprConst::t _inst) { return _get_impl(_inst.get()); }
      p_ExprConst(ExprConst * _pubthis);
      virtual ~p_ExprConst() { /* std::cout << "~p_ExprConst" << std::endl;*/ };
      std::shared_ptr< monty::ndarray< int64_t,1 > > sparsity{};
      std::shared_ptr< monty::ndarray< double,1 > > bfix{};

      virtual void destroy();

      static ExprConst::t _new_ExprConst(std::shared_ptr< monty::ndarray< int32_t,1 > > _4718_shape,std::shared_ptr< monty::ndarray< int64_t,1 > > _4719_sparsity,std::shared_ptr< monty::ndarray< double,1 > > _4720_bfix);
      void _initialize(std::shared_ptr< monty::ndarray< int32_t,1 > > _4718_shape,std::shared_ptr< monty::ndarray< int64_t,1 > > _4719_sparsity,std::shared_ptr< monty::ndarray< double,1 > > _4720_bfix);
      static ExprConst::t _new_ExprConst(std::shared_ptr< monty::ndarray< int32_t,1 > > _4721_shape,std::shared_ptr< monty::ndarray< int64_t,1 > > _4722_sparsity,double _4723_bfix);
      void _initialize(std::shared_ptr< monty::ndarray< int32_t,1 > > _4721_shape,std::shared_ptr< monty::ndarray< int64_t,1 > > _4722_sparsity,double _4723_bfix);
      virtual /* override */ void eval(monty::rc_ptr< ::mosek::fusion::WorkStack > _4726_rs,monty::rc_ptr< ::mosek::fusion::WorkStack > _4727_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _4728_xs) ;
      static  void validate(std::shared_ptr< monty::ndarray< int32_t,1 > > _4747_shape,std::shared_ptr< monty::ndarray< double,1 > > _4748_bfix,std::shared_ptr< monty::ndarray< int64_t,1 > > _4749_sparsity);
      virtual /* override */ std::string toString() ;
    }; // struct ExprConst;

    struct p_ExprPick : public ::mosek::fusion::p_BaseExpression
    {
      ExprPick * _pubthis;
      static mosek::fusion::p_ExprPick* _get_impl(mosek::fusion::ExprPick * _inst){ return static_cast< mosek::fusion::p_ExprPick* >(mosek::fusion::p_BaseExpression::_get_impl(_inst)); }
      static mosek::fusion::p_ExprPick * _get_impl(mosek::fusion::ExprPick::t _inst) { return _get_impl(_inst.get()); }
      p_ExprPick(ExprPick * _pubthis);
      virtual ~p_ExprPick() { /* std::cout << "~p_ExprPick" << std::endl;*/ };
      std::shared_ptr< monty::ndarray< int64_t,1 > > idxs{};
      monty::rc_ptr< ::mosek::fusion::Expression > expr{};

      virtual void destroy();

      static ExprPick::t _new_ExprPick(monty::rc_ptr< ::mosek::fusion::Expression > _4753_expr,std::shared_ptr< monty::ndarray< int32_t,2 > > _4754_idxs);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Expression > _4753_expr,std::shared_ptr< monty::ndarray< int32_t,2 > > _4754_idxs);
      static ExprPick::t _new_ExprPick(monty::rc_ptr< ::mosek::fusion::Expression > _4766_expr,std::shared_ptr< monty::ndarray< int64_t,1 > > _4767_idxs);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Expression > _4766_expr,std::shared_ptr< monty::ndarray< int64_t,1 > > _4767_idxs);
      virtual /* override */ void eval(monty::rc_ptr< ::mosek::fusion::WorkStack > _4772_rs,monty::rc_ptr< ::mosek::fusion::WorkStack > _4773_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _4774_xs) ;
      virtual /* override */ std::string toString() ;
    }; // struct ExprPick;

    struct p_ExprSlice : public ::mosek::fusion::p_BaseExpression
    {
      ExprSlice * _pubthis;
      static mosek::fusion::p_ExprSlice* _get_impl(mosek::fusion::ExprSlice * _inst){ return static_cast< mosek::fusion::p_ExprSlice* >(mosek::fusion::p_BaseExpression::_get_impl(_inst)); }
      static mosek::fusion::p_ExprSlice * _get_impl(mosek::fusion::ExprSlice::t _inst) { return _get_impl(_inst.get()); }
      p_ExprSlice(ExprSlice * _pubthis);
      virtual ~p_ExprSlice() { /* std::cout << "~p_ExprSlice" << std::endl;*/ };
      std::shared_ptr< monty::ndarray< int32_t,1 > > last{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > first{};
      monty::rc_ptr< ::mosek::fusion::Expression > expr{};

      virtual void destroy();

      static ExprSlice::t _new_ExprSlice(monty::rc_ptr< ::mosek::fusion::Expression > _4839_expr,std::shared_ptr< monty::ndarray< int32_t,1 > > _4840_first,std::shared_ptr< monty::ndarray< int32_t,1 > > _4841_last);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Expression > _4839_expr,std::shared_ptr< monty::ndarray< int32_t,1 > > _4840_first,std::shared_ptr< monty::ndarray< int32_t,1 > > _4841_last);
      virtual /* override */ void eval(monty::rc_ptr< ::mosek::fusion::WorkStack > _4842_rs,monty::rc_ptr< ::mosek::fusion::WorkStack > _4843_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _4844_xs) ;
      static  std::shared_ptr< monty::ndarray< int32_t,1 > > makeShape(std::shared_ptr< monty::ndarray< int32_t,1 > > _4909_shape,std::shared_ptr< monty::ndarray< int32_t,1 > > _4910_first,std::shared_ptr< monty::ndarray< int32_t,1 > > _4911_last);
      virtual /* override */ std::string toString() ;
    }; // struct ExprSlice;

    struct p_ExprPermuteDims : public ::mosek::fusion::p_BaseExpression
    {
      ExprPermuteDims * _pubthis;
      static mosek::fusion::p_ExprPermuteDims* _get_impl(mosek::fusion::ExprPermuteDims * _inst){ return static_cast< mosek::fusion::p_ExprPermuteDims* >(mosek::fusion::p_BaseExpression::_get_impl(_inst)); }
      static mosek::fusion::p_ExprPermuteDims * _get_impl(mosek::fusion::ExprPermuteDims::t _inst) { return _get_impl(_inst.get()); }
      p_ExprPermuteDims(ExprPermuteDims * _pubthis);
      virtual ~p_ExprPermuteDims() { /* std::cout << "~p_ExprPermuteDims" << std::endl;*/ };
      std::shared_ptr< monty::ndarray< int32_t,1 > > dperm{};
      monty::rc_ptr< ::mosek::fusion::Expression > expr{};

      virtual void destroy();

      static ExprPermuteDims::t _new_ExprPermuteDims(std::shared_ptr< monty::ndarray< int32_t,1 > > _4916_perm,monty::rc_ptr< ::mosek::fusion::Expression > _4917_expr);
      void _initialize(std::shared_ptr< monty::ndarray< int32_t,1 > > _4916_perm,monty::rc_ptr< ::mosek::fusion::Expression > _4917_expr);
      static ExprPermuteDims::t _new_ExprPermuteDims(std::shared_ptr< monty::ndarray< int32_t,1 > > _4923_perm,monty::rc_ptr< ::mosek::fusion::Expression > _4924_expr,int32_t _4925_validated);
      void _initialize(std::shared_ptr< monty::ndarray< int32_t,1 > > _4923_perm,monty::rc_ptr< ::mosek::fusion::Expression > _4924_expr,int32_t _4925_validated);
      virtual /* override */ void eval(monty::rc_ptr< ::mosek::fusion::WorkStack > _4926_rs,monty::rc_ptr< ::mosek::fusion::WorkStack > _4927_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _4928_xs) ;
      static  std::shared_ptr< monty::ndarray< int32_t,1 > > computeshape(std::shared_ptr< monty::ndarray< int32_t,1 > > _4982_perm,std::shared_ptr< monty::ndarray< int32_t,1 > > _4983_shape);
    }; // struct ExprPermuteDims;

    struct p_ExprTranspose : public ::mosek::fusion::p_BaseExpression
    {
      ExprTranspose * _pubthis;
      static mosek::fusion::p_ExprTranspose* _get_impl(mosek::fusion::ExprTranspose * _inst){ return static_cast< mosek::fusion::p_ExprTranspose* >(mosek::fusion::p_BaseExpression::_get_impl(_inst)); }
      static mosek::fusion::p_ExprTranspose * _get_impl(mosek::fusion::ExprTranspose::t _inst) { return _get_impl(_inst.get()); }
      p_ExprTranspose(ExprTranspose * _pubthis);
      virtual ~p_ExprTranspose() { /* std::cout << "~p_ExprTranspose" << std::endl;*/ };
      monty::rc_ptr< ::mosek::fusion::Expression > expr{};

      virtual void destroy();

      static ExprTranspose::t _new_ExprTranspose(monty::rc_ptr< ::mosek::fusion::Expression > _4985_expr);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Expression > _4985_expr);
      virtual /* override */ void eval(monty::rc_ptr< ::mosek::fusion::WorkStack > _4986_rs,monty::rc_ptr< ::mosek::fusion::WorkStack > _4987_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _4988_xs) ;
      virtual /* override */ std::string toString() ;
      static  std::shared_ptr< monty::ndarray< int32_t,1 > > transposeShape(std::shared_ptr< monty::ndarray< int32_t,1 > > _5041_shape);
    }; // struct ExprTranspose;

    struct p_ExprRepeat : public ::mosek::fusion::p_BaseExpression
    {
      ExprRepeat * _pubthis;
      static mosek::fusion::p_ExprRepeat* _get_impl(mosek::fusion::ExprRepeat * _inst){ return static_cast< mosek::fusion::p_ExprRepeat* >(mosek::fusion::p_BaseExpression::_get_impl(_inst)); }
      static mosek::fusion::p_ExprRepeat * _get_impl(mosek::fusion::ExprRepeat::t _inst) { return _get_impl(_inst.get()); }
      p_ExprRepeat(ExprRepeat * _pubthis);
      virtual ~p_ExprRepeat() { /* std::cout << "~p_ExprRepeat" << std::endl;*/ };
      int32_t n{};
      int32_t dim{};
      monty::rc_ptr< ::mosek::fusion::Expression > expr{};

      virtual void destroy();

      static ExprRepeat::t _new_ExprRepeat(monty::rc_ptr< ::mosek::fusion::Expression > _5042_expr,int32_t _5043_dim,int32_t _5044_n);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Expression > _5042_expr,int32_t _5043_dim,int32_t _5044_n);
      virtual /* override */ void eval(monty::rc_ptr< ::mosek::fusion::WorkStack > _5045_rs,monty::rc_ptr< ::mosek::fusion::WorkStack > _5046_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _5047_xs) ;
      static  std::shared_ptr< monty::ndarray< int32_t,1 > > getshape(monty::rc_ptr< ::mosek::fusion::Expression > _5112_e,int32_t _5113_dim,int32_t _5114_n);
      virtual /* override */ std::string toString() ;
    }; // struct ExprRepeat;

    struct p_ExprStack : public ::mosek::fusion::p_BaseExpression
    {
      ExprStack * _pubthis;
      static mosek::fusion::p_ExprStack* _get_impl(mosek::fusion::ExprStack * _inst){ return static_cast< mosek::fusion::p_ExprStack* >(mosek::fusion::p_BaseExpression::_get_impl(_inst)); }
      static mosek::fusion::p_ExprStack * _get_impl(mosek::fusion::ExprStack::t _inst) { return _get_impl(_inst.get()); }
      p_ExprStack(ExprStack * _pubthis);
      virtual ~p_ExprStack() { /* std::cout << "~p_ExprStack" << std::endl;*/ };
      int32_t dim{};
      std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::Expression >,1 > > exprs{};

      virtual void destroy();

      static ExprStack::t _new_ExprStack(std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::Expression >,1 > > _5119_exprs,int32_t _5120_dim);
      void _initialize(std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::Expression >,1 > > _5119_exprs,int32_t _5120_dim);
      virtual /* override */ void eval(monty::rc_ptr< ::mosek::fusion::WorkStack > _5122_rs,monty::rc_ptr< ::mosek::fusion::WorkStack > _5123_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _5124_xs) ;
      static  std::shared_ptr< monty::ndarray< int32_t,1 > > getshape(std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::Expression >,1 > > _5268_es,int32_t _5269_dim);
      virtual /* override */ std::string toString() ;
    }; // struct ExprStack;

    struct p_ExprInner : public ::mosek::fusion::p_BaseExpression
    {
      ExprInner * _pubthis;
      static mosek::fusion::p_ExprInner* _get_impl(mosek::fusion::ExprInner * _inst){ return static_cast< mosek::fusion::p_ExprInner* >(mosek::fusion::p_BaseExpression::_get_impl(_inst)); }
      static mosek::fusion::p_ExprInner * _get_impl(mosek::fusion::ExprInner::t _inst) { return _get_impl(_inst.get()); }
      p_ExprInner(ExprInner * _pubthis);
      virtual ~p_ExprInner() { /* std::cout << "~p_ExprInner" << std::endl;*/ };
      std::shared_ptr< monty::ndarray< double,1 > > vcof{};
      std::shared_ptr< monty::ndarray< int64_t,1 > > vsub{};
      monty::rc_ptr< ::mosek::fusion::Expression > expr{};

      virtual void destroy();

      static ExprInner::t _new_ExprInner(monty::rc_ptr< ::mosek::fusion::Expression > _5283_expr,std::shared_ptr< monty::ndarray< int64_t,1 > > _5284_vsub,std::shared_ptr< monty::ndarray< double,1 > > _5285_vcof);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Expression > _5283_expr,std::shared_ptr< monty::ndarray< int64_t,1 > > _5284_vsub,std::shared_ptr< monty::ndarray< double,1 > > _5285_vcof);
      static ExprInner::t _new_ExprInner(monty::rc_ptr< ::mosek::fusion::Expression > _5291_expr,std::shared_ptr< monty::ndarray< double,1 > > _5292_vcof);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Expression > _5291_expr,std::shared_ptr< monty::ndarray< double,1 > > _5292_vcof);
      static ExprInner::t _new_ExprInner(monty::rc_ptr< ::mosek::fusion::Expression > _5294_expr,std::shared_ptr< monty::ndarray< int32_t,2 > > _5295_vsub,std::shared_ptr< monty::ndarray< double,1 > > _5296_vcof);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Expression > _5294_expr,std::shared_ptr< monty::ndarray< int32_t,2 > > _5295_vsub,std::shared_ptr< monty::ndarray< double,1 > > _5296_vcof);
      virtual /* override */ void eval(monty::rc_ptr< ::mosek::fusion::WorkStack > _5297_rs,monty::rc_ptr< ::mosek::fusion::WorkStack > _5298_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _5299_xs) ;
      static  std::shared_ptr< monty::ndarray< int64_t,1 > > range(int32_t _5343_n);
      static  std::shared_ptr< monty::ndarray< int64_t,1 > > convert(std::shared_ptr< monty::ndarray< int32_t,1 > > _5345_shape,std::shared_ptr< monty::ndarray< int32_t,2 > > _5346_vsub);
      virtual /* override */ std::string toString() ;
    }; // struct ExprInner;

    struct p_ExprMulDiagRight : public ::mosek::fusion::p_BaseExpression
    {
      ExprMulDiagRight * _pubthis;
      static mosek::fusion::p_ExprMulDiagRight* _get_impl(mosek::fusion::ExprMulDiagRight * _inst){ return static_cast< mosek::fusion::p_ExprMulDiagRight* >(mosek::fusion::p_BaseExpression::_get_impl(_inst)); }
      static mosek::fusion::p_ExprMulDiagRight * _get_impl(mosek::fusion::ExprMulDiagRight::t _inst) { return _get_impl(_inst.get()); }
      p_ExprMulDiagRight(ExprMulDiagRight * _pubthis);
      virtual ~p_ExprMulDiagRight() { /* std::cout << "~p_ExprMulDiagRight" << std::endl;*/ };
      monty::rc_ptr< ::mosek::fusion::Expression > expr{};
      std::shared_ptr< monty::ndarray< double,1 > > mval{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > msubj{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > msubi{};
      int32_t mdim1{};
      int32_t mdim0{};

      virtual void destroy();

      static ExprMulDiagRight::t _new_ExprMulDiagRight(int32_t _5353_mdim0,int32_t _5354_mdim1,std::shared_ptr< monty::ndarray< int32_t,1 > > _5355_msubi,std::shared_ptr< monty::ndarray< int32_t,1 > > _5356_msubj,std::shared_ptr< monty::ndarray< double,1 > > _5357_mval,monty::rc_ptr< ::mosek::fusion::Expression > _5358_expr,int32_t _5359_validated);
      void _initialize(int32_t _5353_mdim0,int32_t _5354_mdim1,std::shared_ptr< monty::ndarray< int32_t,1 > > _5355_msubi,std::shared_ptr< monty::ndarray< int32_t,1 > > _5356_msubj,std::shared_ptr< monty::ndarray< double,1 > > _5357_mval,monty::rc_ptr< ::mosek::fusion::Expression > _5358_expr,int32_t _5359_validated);
      static ExprMulDiagRight::t _new_ExprMulDiagRight(int32_t _5360_mdim0,int32_t _5361_mdim1,std::shared_ptr< monty::ndarray< int32_t,1 > > _5362_msubi,std::shared_ptr< monty::ndarray< int32_t,1 > > _5363_msubj,std::shared_ptr< monty::ndarray< double,1 > > _5364_mval,monty::rc_ptr< ::mosek::fusion::Expression > _5365_expr);
      void _initialize(int32_t _5360_mdim0,int32_t _5361_mdim1,std::shared_ptr< monty::ndarray< int32_t,1 > > _5362_msubi,std::shared_ptr< monty::ndarray< int32_t,1 > > _5363_msubj,std::shared_ptr< monty::ndarray< double,1 > > _5364_mval,monty::rc_ptr< ::mosek::fusion::Expression > _5365_expr);
      virtual /* override */ void eval(monty::rc_ptr< ::mosek::fusion::WorkStack > _5366_rs,monty::rc_ptr< ::mosek::fusion::WorkStack > _5367_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _5368_xs) ;
      static  int32_t validate(int32_t _5447_mdim0,int32_t _5448_mdim1,std::shared_ptr< monty::ndarray< int32_t,1 > > _5449_msubi,std::shared_ptr< monty::ndarray< int32_t,1 > > _5450_msubj,std::shared_ptr< monty::ndarray< double,1 > > _5451_mval,monty::rc_ptr< ::mosek::fusion::Expression > _5452_expr);
      virtual /* override */ std::string toString() ;
    }; // struct ExprMulDiagRight;

    struct p_ExprMulDiagLeft : public ::mosek::fusion::p_BaseExpression
    {
      ExprMulDiagLeft * _pubthis;
      static mosek::fusion::p_ExprMulDiagLeft* _get_impl(mosek::fusion::ExprMulDiagLeft * _inst){ return static_cast< mosek::fusion::p_ExprMulDiagLeft* >(mosek::fusion::p_BaseExpression::_get_impl(_inst)); }
      static mosek::fusion::p_ExprMulDiagLeft * _get_impl(mosek::fusion::ExprMulDiagLeft::t _inst) { return _get_impl(_inst.get()); }
      p_ExprMulDiagLeft(ExprMulDiagLeft * _pubthis);
      virtual ~p_ExprMulDiagLeft() { /* std::cout << "~p_ExprMulDiagLeft" << std::endl;*/ };
      monty::rc_ptr< ::mosek::fusion::Expression > expr{};
      std::shared_ptr< monty::ndarray< double,1 > > mval{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > msubj{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > msubi{};
      int32_t mdim1{};
      int32_t mdim0{};

      virtual void destroy();

      static ExprMulDiagLeft::t _new_ExprMulDiagLeft(int32_t _5461_mdim0,int32_t _5462_mdim1,std::shared_ptr< monty::ndarray< int32_t,1 > > _5463_msubi,std::shared_ptr< monty::ndarray< int32_t,1 > > _5464_msubj,std::shared_ptr< monty::ndarray< double,1 > > _5465_mval,monty::rc_ptr< ::mosek::fusion::Expression > _5466_expr,int32_t _5467_validated);
      void _initialize(int32_t _5461_mdim0,int32_t _5462_mdim1,std::shared_ptr< monty::ndarray< int32_t,1 > > _5463_msubi,std::shared_ptr< monty::ndarray< int32_t,1 > > _5464_msubj,std::shared_ptr< monty::ndarray< double,1 > > _5465_mval,monty::rc_ptr< ::mosek::fusion::Expression > _5466_expr,int32_t _5467_validated);
      static ExprMulDiagLeft::t _new_ExprMulDiagLeft(int32_t _5468_mdim0,int32_t _5469_mdim1,std::shared_ptr< monty::ndarray< int32_t,1 > > _5470_msubi,std::shared_ptr< monty::ndarray< int32_t,1 > > _5471_msubj,std::shared_ptr< monty::ndarray< double,1 > > _5472_mval,monty::rc_ptr< ::mosek::fusion::Expression > _5473_expr);
      void _initialize(int32_t _5468_mdim0,int32_t _5469_mdim1,std::shared_ptr< monty::ndarray< int32_t,1 > > _5470_msubi,std::shared_ptr< monty::ndarray< int32_t,1 > > _5471_msubj,std::shared_ptr< monty::ndarray< double,1 > > _5472_mval,monty::rc_ptr< ::mosek::fusion::Expression > _5473_expr);
      virtual /* override */ void eval(monty::rc_ptr< ::mosek::fusion::WorkStack > _5474_rs,monty::rc_ptr< ::mosek::fusion::WorkStack > _5475_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _5476_xs) ;
      static  int32_t validate(int32_t _5574_mdim0,int32_t _5575_mdim1,std::shared_ptr< monty::ndarray< int32_t,1 > > _5576_msubi,std::shared_ptr< monty::ndarray< int32_t,1 > > _5577_msubj,std::shared_ptr< monty::ndarray< double,1 > > _5578_mval,monty::rc_ptr< ::mosek::fusion::Expression > _5579_expr);
      virtual /* override */ std::string toString() ;
    }; // struct ExprMulDiagLeft;

    struct p_ExprMulElement : public ::mosek::fusion::p_BaseExpression
    {
      ExprMulElement * _pubthis;
      static mosek::fusion::p_ExprMulElement* _get_impl(mosek::fusion::ExprMulElement * _inst){ return static_cast< mosek::fusion::p_ExprMulElement* >(mosek::fusion::p_BaseExpression::_get_impl(_inst)); }
      static mosek::fusion::p_ExprMulElement * _get_impl(mosek::fusion::ExprMulElement::t _inst) { return _get_impl(_inst.get()); }
      p_ExprMulElement(ExprMulElement * _pubthis);
      virtual ~p_ExprMulElement() { /* std::cout << "~p_ExprMulElement" << std::endl;*/ };
      monty::rc_ptr< ::mosek::fusion::Expression > expr{};
      std::shared_ptr< monty::ndarray< int64_t,1 > > msp{};
      std::shared_ptr< monty::ndarray< double,1 > > mcof{};

      virtual void destroy();

      static ExprMulElement::t _new_ExprMulElement(std::shared_ptr< monty::ndarray< double,1 > > _5588_mcof,std::shared_ptr< monty::ndarray< int64_t,1 > > _5589_msp,monty::rc_ptr< ::mosek::fusion::Expression > _5590_expr);
      void _initialize(std::shared_ptr< monty::ndarray< double,1 > > _5588_mcof,std::shared_ptr< monty::ndarray< int64_t,1 > > _5589_msp,monty::rc_ptr< ::mosek::fusion::Expression > _5590_expr);
      static ExprMulElement::t _new_ExprMulElement(std::shared_ptr< monty::ndarray< double,1 > > _5597_cof,std::shared_ptr< monty::ndarray< int64_t,1 > > _5598_msp,monty::rc_ptr< ::mosek::fusion::Expression > _5599_expr,int32_t _5600_validated);
      void _initialize(std::shared_ptr< monty::ndarray< double,1 > > _5597_cof,std::shared_ptr< monty::ndarray< int64_t,1 > > _5598_msp,monty::rc_ptr< ::mosek::fusion::Expression > _5599_expr,int32_t _5600_validated);
      virtual /* override */ void eval(monty::rc_ptr< ::mosek::fusion::WorkStack > _5601_rs,monty::rc_ptr< ::mosek::fusion::WorkStack > _5602_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _5603_xs) ;
      virtual /* override */ std::string toString() ;
    }; // struct ExprMulElement;

    struct p_ExprMulScalarConst : public ::mosek::fusion::p_BaseExpression
    {
      ExprMulScalarConst * _pubthis;
      static mosek::fusion::p_ExprMulScalarConst* _get_impl(mosek::fusion::ExprMulScalarConst * _inst){ return static_cast< mosek::fusion::p_ExprMulScalarConst* >(mosek::fusion::p_BaseExpression::_get_impl(_inst)); }
      static mosek::fusion::p_ExprMulScalarConst * _get_impl(mosek::fusion::ExprMulScalarConst::t _inst) { return _get_impl(_inst.get()); }
      p_ExprMulScalarConst(ExprMulScalarConst * _pubthis);
      virtual ~p_ExprMulScalarConst() { /* std::cout << "~p_ExprMulScalarConst" << std::endl;*/ };
      monty::rc_ptr< ::mosek::fusion::Expression > expr{};
      double c{};

      virtual void destroy();

      static ExprMulScalarConst::t _new_ExprMulScalarConst(double _5661_c,monty::rc_ptr< ::mosek::fusion::Expression > _5662_expr);
      void _initialize(double _5661_c,monty::rc_ptr< ::mosek::fusion::Expression > _5662_expr);
      virtual /* override */ void eval(monty::rc_ptr< ::mosek::fusion::WorkStack > _5663_rs,monty::rc_ptr< ::mosek::fusion::WorkStack > _5664_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _5665_xs) ;
      virtual /* override */ std::string toString() ;
    }; // struct ExprMulScalarConst;

    struct p_ExprScalarMul : public ::mosek::fusion::p_BaseExpression
    {
      ExprScalarMul * _pubthis;
      static mosek::fusion::p_ExprScalarMul* _get_impl(mosek::fusion::ExprScalarMul * _inst){ return static_cast< mosek::fusion::p_ExprScalarMul* >(mosek::fusion::p_BaseExpression::_get_impl(_inst)); }
      static mosek::fusion::p_ExprScalarMul * _get_impl(mosek::fusion::ExprScalarMul::t _inst) { return _get_impl(_inst.get()); }
      p_ExprScalarMul(ExprScalarMul * _pubthis);
      virtual ~p_ExprScalarMul() { /* std::cout << "~p_ExprScalarMul" << std::endl;*/ };
      monty::rc_ptr< ::mosek::fusion::Expression > expr{};
      std::shared_ptr< monty::ndarray< double,1 > > mval{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > msubj{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > msubi{};
      int32_t mdim1{};
      int32_t mdim0{};

      virtual void destroy();

      static ExprScalarMul::t _new_ExprScalarMul(int32_t _5703_mdim0,int32_t _5704_mdim1,std::shared_ptr< monty::ndarray< int32_t,1 > > _5705_msubi,std::shared_ptr< monty::ndarray< int32_t,1 > > _5706_msubj,std::shared_ptr< monty::ndarray< double,1 > > _5707_mval,monty::rc_ptr< ::mosek::fusion::Expression > _5708_expr,int32_t _5709_validated);
      void _initialize(int32_t _5703_mdim0,int32_t _5704_mdim1,std::shared_ptr< monty::ndarray< int32_t,1 > > _5705_msubi,std::shared_ptr< monty::ndarray< int32_t,1 > > _5706_msubj,std::shared_ptr< monty::ndarray< double,1 > > _5707_mval,monty::rc_ptr< ::mosek::fusion::Expression > _5708_expr,int32_t _5709_validated);
      static ExprScalarMul::t _new_ExprScalarMul(int32_t _5710_mdim0,int32_t _5711_mdim1,std::shared_ptr< monty::ndarray< int32_t,1 > > _5712_msubi,std::shared_ptr< monty::ndarray< int32_t,1 > > _5713_msubj,std::shared_ptr< monty::ndarray< double,1 > > _5714_mval,monty::rc_ptr< ::mosek::fusion::Expression > _5715_expr);
      void _initialize(int32_t _5710_mdim0,int32_t _5711_mdim1,std::shared_ptr< monty::ndarray< int32_t,1 > > _5712_msubi,std::shared_ptr< monty::ndarray< int32_t,1 > > _5713_msubj,std::shared_ptr< monty::ndarray< double,1 > > _5714_mval,monty::rc_ptr< ::mosek::fusion::Expression > _5715_expr);
      virtual /* override */ void eval(monty::rc_ptr< ::mosek::fusion::WorkStack > _5716_rs,monty::rc_ptr< ::mosek::fusion::WorkStack > _5717_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _5718_xs) ;
      static  int32_t validate(int32_t _5754_mdim0,int32_t _5755_mdim1,std::shared_ptr< monty::ndarray< int32_t,1 > > _5756_msubi,std::shared_ptr< monty::ndarray< int32_t,1 > > _5757_msubj,std::shared_ptr< monty::ndarray< double,1 > > _5758_mval,monty::rc_ptr< ::mosek::fusion::Expression > _5759_expr);
      virtual /* override */ std::string toString() ;
    }; // struct ExprScalarMul;

    struct p_ExprMulRight : public ::mosek::fusion::p_BaseExpression
    {
      ExprMulRight * _pubthis;
      static mosek::fusion::p_ExprMulRight* _get_impl(mosek::fusion::ExprMulRight * _inst){ return static_cast< mosek::fusion::p_ExprMulRight* >(mosek::fusion::p_BaseExpression::_get_impl(_inst)); }
      static mosek::fusion::p_ExprMulRight * _get_impl(mosek::fusion::ExprMulRight::t _inst) { return _get_impl(_inst.get()); }
      p_ExprMulRight(ExprMulRight * _pubthis);
      virtual ~p_ExprMulRight() { /* std::cout << "~p_ExprMulRight" << std::endl;*/ };
      monty::rc_ptr< ::mosek::fusion::Expression > expr{};
      std::shared_ptr< monty::ndarray< double,1 > > mval{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > msubj{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > msubi{};
      int32_t mdim1{};
      int32_t mdim0{};

      virtual void destroy();

      static ExprMulRight::t _new_ExprMulRight(int32_t _5766_mdim0,int32_t _5767_mdim1,std::shared_ptr< monty::ndarray< int32_t,1 > > _5768_msubi,std::shared_ptr< monty::ndarray< int32_t,1 > > _5769_msubj,std::shared_ptr< monty::ndarray< double,1 > > _5770_mval,monty::rc_ptr< ::mosek::fusion::Expression > _5771_expr,int32_t _5772_validated);
      void _initialize(int32_t _5766_mdim0,int32_t _5767_mdim1,std::shared_ptr< monty::ndarray< int32_t,1 > > _5768_msubi,std::shared_ptr< monty::ndarray< int32_t,1 > > _5769_msubj,std::shared_ptr< monty::ndarray< double,1 > > _5770_mval,monty::rc_ptr< ::mosek::fusion::Expression > _5771_expr,int32_t _5772_validated);
      static ExprMulRight::t _new_ExprMulRight(int32_t _5773_mdim0,int32_t _5774_mdim1,std::shared_ptr< monty::ndarray< int32_t,1 > > _5775_msubi,std::shared_ptr< monty::ndarray< int32_t,1 > > _5776_msubj,std::shared_ptr< monty::ndarray< double,1 > > _5777_mval,monty::rc_ptr< ::mosek::fusion::Expression > _5778_expr);
      void _initialize(int32_t _5773_mdim0,int32_t _5774_mdim1,std::shared_ptr< monty::ndarray< int32_t,1 > > _5775_msubi,std::shared_ptr< monty::ndarray< int32_t,1 > > _5776_msubj,std::shared_ptr< monty::ndarray< double,1 > > _5777_mval,monty::rc_ptr< ::mosek::fusion::Expression > _5778_expr);
      virtual /* override */ void eval(monty::rc_ptr< ::mosek::fusion::WorkStack > _5779_rs,monty::rc_ptr< ::mosek::fusion::WorkStack > _5780_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _5781_xs) ;
      static  std::shared_ptr< monty::ndarray< int32_t,1 > > computeshape(int32_t _5925_d0,std::shared_ptr< monty::ndarray< int32_t,1 > > _5926_ds);
      static  int32_t validate(int32_t _5927_mdim0,int32_t _5928_mdim1,std::shared_ptr< monty::ndarray< int32_t,1 > > _5929_msubi,std::shared_ptr< monty::ndarray< int32_t,1 > > _5930_msubj,std::shared_ptr< monty::ndarray< double,1 > > _5931_mval,monty::rc_ptr< ::mosek::fusion::Expression > _5932_expr);
      virtual /* override */ std::string toString() ;
    }; // struct ExprMulRight;

    struct p_ExprMulLeft : public ::mosek::fusion::p_BaseExpression
    {
      ExprMulLeft * _pubthis;
      static mosek::fusion::p_ExprMulLeft* _get_impl(mosek::fusion::ExprMulLeft * _inst){ return static_cast< mosek::fusion::p_ExprMulLeft* >(mosek::fusion::p_BaseExpression::_get_impl(_inst)); }
      static mosek::fusion::p_ExprMulLeft * _get_impl(mosek::fusion::ExprMulLeft::t _inst) { return _get_impl(_inst.get()); }
      p_ExprMulLeft(ExprMulLeft * _pubthis);
      virtual ~p_ExprMulLeft() { /* std::cout << "~p_ExprMulLeft" << std::endl;*/ };
      monty::rc_ptr< ::mosek::fusion::Expression > expr{};
      std::shared_ptr< monty::ndarray< double,1 > > mval{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > msubj{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > msubi{};
      int32_t mdim1{};
      int32_t mdim0{};

      virtual void destroy();

      static ExprMulLeft::t _new_ExprMulLeft(int32_t _5941_mdim0,int32_t _5942_mdim1,std::shared_ptr< monty::ndarray< int32_t,1 > > _5943_msubi,std::shared_ptr< monty::ndarray< int32_t,1 > > _5944_msubj,std::shared_ptr< monty::ndarray< double,1 > > _5945_mval,monty::rc_ptr< ::mosek::fusion::Expression > _5946_expr,int32_t _5947_validated);
      void _initialize(int32_t _5941_mdim0,int32_t _5942_mdim1,std::shared_ptr< monty::ndarray< int32_t,1 > > _5943_msubi,std::shared_ptr< monty::ndarray< int32_t,1 > > _5944_msubj,std::shared_ptr< monty::ndarray< double,1 > > _5945_mval,monty::rc_ptr< ::mosek::fusion::Expression > _5946_expr,int32_t _5947_validated);
      static ExprMulLeft::t _new_ExprMulLeft(int32_t _5948_mdim0,int32_t _5949_mdim1,std::shared_ptr< monty::ndarray< int32_t,1 > > _5950_msubi,std::shared_ptr< monty::ndarray< int32_t,1 > > _5951_msubj,std::shared_ptr< monty::ndarray< double,1 > > _5952_mval,monty::rc_ptr< ::mosek::fusion::Expression > _5953_expr);
      void _initialize(int32_t _5948_mdim0,int32_t _5949_mdim1,std::shared_ptr< monty::ndarray< int32_t,1 > > _5950_msubi,std::shared_ptr< monty::ndarray< int32_t,1 > > _5951_msubj,std::shared_ptr< monty::ndarray< double,1 > > _5952_mval,monty::rc_ptr< ::mosek::fusion::Expression > _5953_expr);
      virtual /* override */ void eval(monty::rc_ptr< ::mosek::fusion::WorkStack > _5954_rs,monty::rc_ptr< ::mosek::fusion::WorkStack > _5955_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _5956_xs) ;
      static  std::shared_ptr< monty::ndarray< int32_t,1 > > computeshape(int32_t _6058_d0,int32_t _6059_d1,std::shared_ptr< monty::ndarray< int32_t,1 > > _6060_ds);
      static  int32_t validate(int32_t _6061_mdim0,int32_t _6062_mdim1,std::shared_ptr< monty::ndarray< int32_t,1 > > _6063_msubi,std::shared_ptr< monty::ndarray< int32_t,1 > > _6064_msubj,std::shared_ptr< monty::ndarray< double,1 > > _6065_mval,monty::rc_ptr< ::mosek::fusion::Expression > _6066_expr);
      virtual /* override */ std::string toString() ;
    }; // struct ExprMulLeft;

    struct p_ExprMulVar : public ::mosek::fusion::p_BaseExpression
    {
      ExprMulVar * _pubthis;
      static mosek::fusion::p_ExprMulVar* _get_impl(mosek::fusion::ExprMulVar * _inst){ return static_cast< mosek::fusion::p_ExprMulVar* >(mosek::fusion::p_BaseExpression::_get_impl(_inst)); }
      static mosek::fusion::p_ExprMulVar * _get_impl(mosek::fusion::ExprMulVar::t _inst) { return _get_impl(_inst.get()); }
      p_ExprMulVar(ExprMulVar * _pubthis);
      virtual ~p_ExprMulVar() { /* std::cout << "~p_ExprMulVar" << std::endl;*/ };
      bool left{};
      monty::rc_ptr< ::mosek::fusion::Variable > x{};
      std::shared_ptr< monty::ndarray< double,1 > > mcof{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > msubj{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > msubi{};
      int32_t mdimj{};
      int32_t mdimi{};

      virtual void destroy();

      static ExprMulVar::t _new_ExprMulVar(bool _6074_left,int32_t _6075_mdimi,int32_t _6076_mdimj,std::shared_ptr< monty::ndarray< int32_t,1 > > _6077_msubi,std::shared_ptr< monty::ndarray< int32_t,1 > > _6078_msubj,std::shared_ptr< monty::ndarray< double,1 > > _6079_mcof,monty::rc_ptr< ::mosek::fusion::Variable > _6080_x);
      void _initialize(bool _6074_left,int32_t _6075_mdimi,int32_t _6076_mdimj,std::shared_ptr< monty::ndarray< int32_t,1 > > _6077_msubi,std::shared_ptr< monty::ndarray< int32_t,1 > > _6078_msubj,std::shared_ptr< monty::ndarray< double,1 > > _6079_mcof,monty::rc_ptr< ::mosek::fusion::Variable > _6080_x);
      static ExprMulVar::t _new_ExprMulVar(bool _6083_left,int32_t _6084_mdimi,int32_t _6085_mdimj,std::shared_ptr< monty::ndarray< int32_t,1 > > _6086_msubi,std::shared_ptr< monty::ndarray< int32_t,1 > > _6087_msubj,std::shared_ptr< monty::ndarray< double,1 > > _6088_mcof,monty::rc_ptr< ::mosek::fusion::Variable > _6089_x,int32_t _6090_unchecked_);
      void _initialize(bool _6083_left,int32_t _6084_mdimi,int32_t _6085_mdimj,std::shared_ptr< monty::ndarray< int32_t,1 > > _6086_msubi,std::shared_ptr< monty::ndarray< int32_t,1 > > _6087_msubj,std::shared_ptr< monty::ndarray< double,1 > > _6088_mcof,monty::rc_ptr< ::mosek::fusion::Variable > _6089_x,int32_t _6090_unchecked_);
      virtual /* override */ void eval(monty::rc_ptr< ::mosek::fusion::WorkStack > _6091_rs,monty::rc_ptr< ::mosek::fusion::WorkStack > _6092_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _6093_xs) ;
      virtual void eval_right(monty::rc_ptr< ::mosek::fusion::WorkStack > _6094_rs,monty::rc_ptr< ::mosek::fusion::WorkStack > _6095_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _6096_xs) ;
      virtual void eval_left(monty::rc_ptr< ::mosek::fusion::WorkStack > _6201_rs,monty::rc_ptr< ::mosek::fusion::WorkStack > _6202_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _6203_xs) ;
      virtual void validate(int32_t _6276_mdimi,int32_t _6277_mdimj,std::shared_ptr< monty::ndarray< int32_t,1 > > _6278_msubi,std::shared_ptr< monty::ndarray< int32_t,1 > > _6279_msubj,std::shared_ptr< monty::ndarray< double,1 > > _6280_mcof) ;
      static  std::shared_ptr< monty::ndarray< int32_t,1 > > resshape(int32_t _6284_mdimi,int32_t _6285_mdimj,std::shared_ptr< monty::ndarray< int32_t,1 > > _6286_xshape,bool _6287_left);
      virtual /* override */ std::string toString() ;
    }; // struct ExprMulVar;

    struct p_ExprMulScalarVar : public ::mosek::fusion::p_BaseExpression
    {
      ExprMulScalarVar * _pubthis;
      static mosek::fusion::p_ExprMulScalarVar* _get_impl(mosek::fusion::ExprMulScalarVar * _inst){ return static_cast< mosek::fusion::p_ExprMulScalarVar* >(mosek::fusion::p_BaseExpression::_get_impl(_inst)); }
      static mosek::fusion::p_ExprMulScalarVar * _get_impl(mosek::fusion::ExprMulScalarVar::t _inst) { return _get_impl(_inst.get()); }
      p_ExprMulScalarVar(ExprMulScalarVar * _pubthis);
      virtual ~p_ExprMulScalarVar() { /* std::cout << "~p_ExprMulScalarVar" << std::endl;*/ };
      monty::rc_ptr< ::mosek::fusion::Variable > x{};
      std::shared_ptr< monty::ndarray< double,1 > > mcof{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > msubj{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > msubi{};
      int32_t mdimj{};
      int32_t mdimi{};

      virtual void destroy();

      static ExprMulScalarVar::t _new_ExprMulScalarVar(int32_t _6288_mdimi,int32_t _6289_mdimj,std::shared_ptr< monty::ndarray< int32_t,1 > > _6290_msubi,std::shared_ptr< monty::ndarray< int32_t,1 > > _6291_msubj,std::shared_ptr< monty::ndarray< double,1 > > _6292_mcof,monty::rc_ptr< ::mosek::fusion::Variable > _6293_x);
      void _initialize(int32_t _6288_mdimi,int32_t _6289_mdimj,std::shared_ptr< monty::ndarray< int32_t,1 > > _6290_msubi,std::shared_ptr< monty::ndarray< int32_t,1 > > _6291_msubj,std::shared_ptr< monty::ndarray< double,1 > > _6292_mcof,monty::rc_ptr< ::mosek::fusion::Variable > _6293_x);
      static ExprMulScalarVar::t _new_ExprMulScalarVar(int32_t _6298_mdimi,int32_t _6299_mdimj,std::shared_ptr< monty::ndarray< int32_t,1 > > _6300_msubi,std::shared_ptr< monty::ndarray< int32_t,1 > > _6301_msubj,std::shared_ptr< monty::ndarray< double,1 > > _6302_mcof,monty::rc_ptr< ::mosek::fusion::Variable > _6303_x,int32_t _6304_unchecked_);
      void _initialize(int32_t _6298_mdimi,int32_t _6299_mdimj,std::shared_ptr< monty::ndarray< int32_t,1 > > _6300_msubi,std::shared_ptr< monty::ndarray< int32_t,1 > > _6301_msubj,std::shared_ptr< monty::ndarray< double,1 > > _6302_mcof,monty::rc_ptr< ::mosek::fusion::Variable > _6303_x,int32_t _6304_unchecked_);
      virtual /* override */ void eval(monty::rc_ptr< ::mosek::fusion::WorkStack > _6305_rs,monty::rc_ptr< ::mosek::fusion::WorkStack > _6306_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _6307_xs) ;
      virtual /* override */ std::string toString() ;
    }; // struct ExprMulScalarVar;

    struct p_ExprMulVarScalarConst : public ::mosek::fusion::p_BaseExpression
    {
      ExprMulVarScalarConst * _pubthis;
      static mosek::fusion::p_ExprMulVarScalarConst* _get_impl(mosek::fusion::ExprMulVarScalarConst * _inst){ return static_cast< mosek::fusion::p_ExprMulVarScalarConst* >(mosek::fusion::p_BaseExpression::_get_impl(_inst)); }
      static mosek::fusion::p_ExprMulVarScalarConst * _get_impl(mosek::fusion::ExprMulVarScalarConst::t _inst) { return _get_impl(_inst.get()); }
      p_ExprMulVarScalarConst(ExprMulVarScalarConst * _pubthis);
      virtual ~p_ExprMulVarScalarConst() { /* std::cout << "~p_ExprMulVarScalarConst" << std::endl;*/ };
      double c{};
      monty::rc_ptr< ::mosek::fusion::Variable > x{};

      virtual void destroy();

      static ExprMulVarScalarConst::t _new_ExprMulVarScalarConst(monty::rc_ptr< ::mosek::fusion::Variable > _6324_x,double _6325_c);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Variable > _6324_x,double _6325_c);
      virtual /* override */ void eval(monty::rc_ptr< ::mosek::fusion::WorkStack > _6326_rs,monty::rc_ptr< ::mosek::fusion::WorkStack > _6327_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _6328_xs) ;
      virtual /* override */ std::string toString() ;
    }; // struct ExprMulVarScalarConst;

    struct p_ExprAdd : public ::mosek::fusion::p_BaseExpression
    {
      ExprAdd * _pubthis;
      static mosek::fusion::p_ExprAdd* _get_impl(mosek::fusion::ExprAdd * _inst){ return static_cast< mosek::fusion::p_ExprAdd* >(mosek::fusion::p_BaseExpression::_get_impl(_inst)); }
      static mosek::fusion::p_ExprAdd * _get_impl(mosek::fusion::ExprAdd::t _inst) { return _get_impl(_inst.get()); }
      p_ExprAdd(ExprAdd * _pubthis);
      virtual ~p_ExprAdd() { /* std::cout << "~p_ExprAdd" << std::endl;*/ };
      double m2{};
      double m1{};
      monty::rc_ptr< ::mosek::fusion::Expression > e2{};
      monty::rc_ptr< ::mosek::fusion::Expression > e1{};

      virtual void destroy();

      static ExprAdd::t _new_ExprAdd(monty::rc_ptr< ::mosek::fusion::Expression > _6345_e1,monty::rc_ptr< ::mosek::fusion::Expression > _6346_e2,double _6347_m1,double _6348_m2);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Expression > _6345_e1,monty::rc_ptr< ::mosek::fusion::Expression > _6346_e2,double _6347_m1,double _6348_m2);
      virtual /* override */ void eval(monty::rc_ptr< ::mosek::fusion::WorkStack > _6350_rs,monty::rc_ptr< ::mosek::fusion::WorkStack > _6351_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _6352_xs) ;
      virtual /* override */ std::string toString() ;
    }; // struct ExprAdd;

    struct p_ExprWSum : public ::mosek::fusion::p_BaseExpression
    {
      ExprWSum * _pubthis;
      static mosek::fusion::p_ExprWSum* _get_impl(mosek::fusion::ExprWSum * _inst){ return static_cast< mosek::fusion::p_ExprWSum* >(mosek::fusion::p_BaseExpression::_get_impl(_inst)); }
      static mosek::fusion::p_ExprWSum * _get_impl(mosek::fusion::ExprWSum::t _inst) { return _get_impl(_inst.get()); }
      p_ExprWSum(ExprWSum * _pubthis);
      virtual ~p_ExprWSum() { /* std::cout << "~p_ExprWSum" << std::endl;*/ };
      std::shared_ptr< monty::ndarray< double,1 > > w{};
      std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::Expression >,1 > > es{};

      virtual void destroy();

      static ExprWSum::t _new_ExprWSum(std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::Expression >,1 > > _6486_es,std::shared_ptr< monty::ndarray< double,1 > > _6487_w);
      void _initialize(std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::Expression >,1 > > _6486_es,std::shared_ptr< monty::ndarray< double,1 > > _6487_w);
      virtual /* override */ void eval(monty::rc_ptr< ::mosek::fusion::WorkStack > _6494_rs,monty::rc_ptr< ::mosek::fusion::WorkStack > _6495_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _6496_xs) ;
      virtual /* override */ std::string toString() ;
    }; // struct ExprWSum;

    struct p_ExprSumReduce : public ::mosek::fusion::p_BaseExpression
    {
      ExprSumReduce * _pubthis;
      static mosek::fusion::p_ExprSumReduce* _get_impl(mosek::fusion::ExprSumReduce * _inst){ return static_cast< mosek::fusion::p_ExprSumReduce* >(mosek::fusion::p_BaseExpression::_get_impl(_inst)); }
      static mosek::fusion::p_ExprSumReduce * _get_impl(mosek::fusion::ExprSumReduce::t _inst) { return _get_impl(_inst.get()); }
      p_ExprSumReduce(ExprSumReduce * _pubthis);
      virtual ~p_ExprSumReduce() { /* std::cout << "~p_ExprSumReduce" << std::endl;*/ };
      int32_t dim{};
      monty::rc_ptr< ::mosek::fusion::Expression > expr{};

      virtual void destroy();

      static ExprSumReduce::t _new_ExprSumReduce(int32_t _6590_dim,monty::rc_ptr< ::mosek::fusion::Expression > _6591_expr);
      void _initialize(int32_t _6590_dim,monty::rc_ptr< ::mosek::fusion::Expression > _6591_expr);
      virtual /* override */ void eval(monty::rc_ptr< ::mosek::fusion::WorkStack > _6593_rs,monty::rc_ptr< ::mosek::fusion::WorkStack > _6594_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _6595_xs) ;
      static  std::shared_ptr< monty::ndarray< int32_t,1 > > computeShape(int32_t _6711_dim,std::shared_ptr< monty::ndarray< int32_t,1 > > _6712_shape);
      virtual /* override */ std::string toString() ;
    }; // struct ExprSumReduce;

    struct p_ExprScaleVecPSD : public ::mosek::fusion::p_BaseExpression
    {
      ExprScaleVecPSD * _pubthis;
      static mosek::fusion::p_ExprScaleVecPSD* _get_impl(mosek::fusion::ExprScaleVecPSD * _inst){ return static_cast< mosek::fusion::p_ExprScaleVecPSD* >(mosek::fusion::p_BaseExpression::_get_impl(_inst)); }
      static mosek::fusion::p_ExprScaleVecPSD * _get_impl(mosek::fusion::ExprScaleVecPSD::t _inst) { return _get_impl(_inst.get()); }
      p_ExprScaleVecPSD(ExprScaleVecPSD * _pubthis);
      virtual ~p_ExprScaleVecPSD() { /* std::cout << "~p_ExprScaleVecPSD" << std::endl;*/ };
      int32_t dim1{};
      int32_t dim0{};
      monty::rc_ptr< ::mosek::fusion::Expression > expr{};

      virtual void destroy();

      static ExprScaleVecPSD::t _new_ExprScaleVecPSD(int32_t _6716_dim0,int32_t _6717_dim1,monty::rc_ptr< ::mosek::fusion::BaseExpression > _6718_expr);
      void _initialize(int32_t _6716_dim0,int32_t _6717_dim1,monty::rc_ptr< ::mosek::fusion::BaseExpression > _6718_expr);
      virtual /* override */ void eval(monty::rc_ptr< ::mosek::fusion::WorkStack > _6719_rs,monty::rc_ptr< ::mosek::fusion::WorkStack > _6720_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _6721_xs) ;
    }; // struct ExprScaleVecPSD;

    struct p_ExprDenseTril : public ::mosek::fusion::p_BaseExpression
    {
      ExprDenseTril * _pubthis;
      static mosek::fusion::p_ExprDenseTril* _get_impl(mosek::fusion::ExprDenseTril * _inst){ return static_cast< mosek::fusion::p_ExprDenseTril* >(mosek::fusion::p_BaseExpression::_get_impl(_inst)); }
      static mosek::fusion::p_ExprDenseTril * _get_impl(mosek::fusion::ExprDenseTril::t _inst) { return _get_impl(_inst.get()); }
      p_ExprDenseTril(ExprDenseTril * _pubthis);
      virtual ~p_ExprDenseTril() { /* std::cout << "~p_ExprDenseTril" << std::endl;*/ };
      int32_t dim1{};
      int32_t dim0{};
      monty::rc_ptr< ::mosek::fusion::Expression > expr{};

      virtual void destroy();

      static ExprDenseTril::t _new_ExprDenseTril(int32_t _6794_dim0,int32_t _6795_dim1,monty::rc_ptr< ::mosek::fusion::Expression > _6796_expr,int32_t _6797_unchecked_);
      void _initialize(int32_t _6794_dim0,int32_t _6795_dim1,monty::rc_ptr< ::mosek::fusion::Expression > _6796_expr,int32_t _6797_unchecked_);
      static ExprDenseTril::t _new_ExprDenseTril(int32_t _6798_dim0_,int32_t _6799_dim1_,monty::rc_ptr< ::mosek::fusion::Expression > _6800_expr);
      void _initialize(int32_t _6798_dim0_,int32_t _6799_dim1_,monty::rc_ptr< ::mosek::fusion::Expression > _6800_expr);
      virtual /* override */ void eval(monty::rc_ptr< ::mosek::fusion::WorkStack > _6802_rs,monty::rc_ptr< ::mosek::fusion::WorkStack > _6803_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _6804_xs) ;
      virtual /* override */ std::string toString() ;
    }; // struct ExprDenseTril;

    struct p_ExprDense : public ::mosek::fusion::p_BaseExpression
    {
      ExprDense * _pubthis;
      static mosek::fusion::p_ExprDense* _get_impl(mosek::fusion::ExprDense * _inst){ return static_cast< mosek::fusion::p_ExprDense* >(mosek::fusion::p_BaseExpression::_get_impl(_inst)); }
      static mosek::fusion::p_ExprDense * _get_impl(mosek::fusion::ExprDense::t _inst) { return _get_impl(_inst.get()); }
      p_ExprDense(ExprDense * _pubthis);
      virtual ~p_ExprDense() { /* std::cout << "~p_ExprDense" << std::endl;*/ };
      monty::rc_ptr< ::mosek::fusion::Expression > expr{};

      virtual void destroy();

      static ExprDense::t _new_ExprDense(monty::rc_ptr< ::mosek::fusion::Expression > _6888_expr);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Expression > _6888_expr);
      virtual /* override */ void eval(monty::rc_ptr< ::mosek::fusion::WorkStack > _6889_rs,monty::rc_ptr< ::mosek::fusion::WorkStack > _6890_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _6891_xs) ;
      virtual /* override */ std::string toString() ;
    }; // struct ExprDense;

    struct p_ExprSymmetrize : public ::mosek::fusion::p_BaseExpression
    {
      ExprSymmetrize * _pubthis;
      static mosek::fusion::p_ExprSymmetrize* _get_impl(mosek::fusion::ExprSymmetrize * _inst){ return static_cast< mosek::fusion::p_ExprSymmetrize* >(mosek::fusion::p_BaseExpression::_get_impl(_inst)); }
      static mosek::fusion::p_ExprSymmetrize * _get_impl(mosek::fusion::ExprSymmetrize::t _inst) { return _get_impl(_inst.get()); }
      p_ExprSymmetrize(ExprSymmetrize * _pubthis);
      virtual ~p_ExprSymmetrize() { /* std::cout << "~p_ExprSymmetrize" << std::endl;*/ };
      int32_t dim1{};
      int32_t dim0{};
      monty::rc_ptr< ::mosek::fusion::Expression > expr{};

      virtual void destroy();

      static ExprSymmetrize::t _new_ExprSymmetrize(int32_t _6932_dim0,int32_t _6933_dim1,monty::rc_ptr< ::mosek::fusion::Expression > _6934_expr,int32_t _6935_unchecked_);
      void _initialize(int32_t _6932_dim0,int32_t _6933_dim1,monty::rc_ptr< ::mosek::fusion::Expression > _6934_expr,int32_t _6935_unchecked_);
      static ExprSymmetrize::t _new_ExprSymmetrize(int32_t _6936_dim0_,int32_t _6937_dim1_,monty::rc_ptr< ::mosek::fusion::Expression > _6938_expr);
      void _initialize(int32_t _6936_dim0_,int32_t _6937_dim1_,monty::rc_ptr< ::mosek::fusion::Expression > _6938_expr);
      virtual /* override */ void eval(monty::rc_ptr< ::mosek::fusion::WorkStack > _6940_rs,monty::rc_ptr< ::mosek::fusion::WorkStack > _6941_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _6942_xs) ;
      virtual /* override */ std::string toString() ;
    }; // struct ExprSymmetrize;

    struct p_ExprCondense : public ::mosek::fusion::p_BaseExpression
    {
      ExprCondense * _pubthis;
      static mosek::fusion::p_ExprCondense* _get_impl(mosek::fusion::ExprCondense * _inst){ return static_cast< mosek::fusion::p_ExprCondense* >(mosek::fusion::p_BaseExpression::_get_impl(_inst)); }
      static mosek::fusion::p_ExprCondense * _get_impl(mosek::fusion::ExprCondense::t _inst) { return _get_impl(_inst.get()); }
      p_ExprCondense(ExprCondense * _pubthis);
      virtual ~p_ExprCondense() { /* std::cout << "~p_ExprCondense" << std::endl;*/ };
      monty::rc_ptr< ::mosek::fusion::Expression > expr{};

      virtual void destroy();

      static ExprCondense::t _new_ExprCondense(monty::rc_ptr< ::mosek::fusion::Expression > _7066_expr);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Expression > _7066_expr);
      virtual /* override */ void eval(monty::rc_ptr< ::mosek::fusion::WorkStack > _7067_rs,monty::rc_ptr< ::mosek::fusion::WorkStack > _7068_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _7069_xs) ;
      virtual /* override */ std::string toString() ;
    }; // struct ExprCondense;

    struct p_ExprFromVar : public ::mosek::fusion::p_BaseExpression
    {
      ExprFromVar * _pubthis;
      static mosek::fusion::p_ExprFromVar* _get_impl(mosek::fusion::ExprFromVar * _inst){ return static_cast< mosek::fusion::p_ExprFromVar* >(mosek::fusion::p_BaseExpression::_get_impl(_inst)); }
      static mosek::fusion::p_ExprFromVar * _get_impl(mosek::fusion::ExprFromVar::t _inst) { return _get_impl(_inst.get()); }
      p_ExprFromVar(ExprFromVar * _pubthis);
      virtual ~p_ExprFromVar() { /* std::cout << "~p_ExprFromVar" << std::endl;*/ };
      monty::rc_ptr< ::mosek::fusion::Variable > x{};

      virtual void destroy();

      static ExprFromVar::t _new_ExprFromVar(monty::rc_ptr< ::mosek::fusion::Variable > _7073_x);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Variable > _7073_x);
      virtual /* override */ void eval(monty::rc_ptr< ::mosek::fusion::WorkStack > _7074_rs,monty::rc_ptr< ::mosek::fusion::WorkStack > _7075_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _7076_xs) ;
      virtual /* override */ std::string toString() ;
    }; // struct ExprFromVar;

    struct p_ExprReshape : public ::mosek::fusion::p_BaseExpression
    {
      ExprReshape * _pubthis;
      static mosek::fusion::p_ExprReshape* _get_impl(mosek::fusion::ExprReshape * _inst){ return static_cast< mosek::fusion::p_ExprReshape* >(mosek::fusion::p_BaseExpression::_get_impl(_inst)); }
      static mosek::fusion::p_ExprReshape * _get_impl(mosek::fusion::ExprReshape::t _inst) { return _get_impl(_inst.get()); }
      p_ExprReshape(ExprReshape * _pubthis);
      virtual ~p_ExprReshape() { /* std::cout << "~p_ExprReshape" << std::endl;*/ };
      monty::rc_ptr< ::mosek::fusion::Expression > e{};

      virtual void destroy();

      static ExprReshape::t _new_ExprReshape(std::shared_ptr< monty::ndarray< int32_t,1 > > _7093_shape,monty::rc_ptr< ::mosek::fusion::Expression > _7094_e);
      void _initialize(std::shared_ptr< monty::ndarray< int32_t,1 > > _7093_shape,monty::rc_ptr< ::mosek::fusion::Expression > _7094_e);
      virtual /* override */ void eval(monty::rc_ptr< ::mosek::fusion::WorkStack > _7096_rs,monty::rc_ptr< ::mosek::fusion::WorkStack > _7097_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _7098_xs) ;
      virtual /* override */ std::string toString() ;
    }; // struct ExprReshape;

    struct p_Expr : public ::mosek::fusion::p_BaseExpression
    {
      Expr * _pubthis;
      static mosek::fusion::p_Expr* _get_impl(mosek::fusion::Expr * _inst){ return static_cast< mosek::fusion::p_Expr* >(mosek::fusion::p_BaseExpression::_get_impl(_inst)); }
      static mosek::fusion::p_Expr * _get_impl(mosek::fusion::Expr::t _inst) { return _get_impl(_inst.get()); }
      p_Expr(Expr * _pubthis);
      virtual ~p_Expr() { /* std::cout << "~p_Expr" << std::endl;*/ };
      std::shared_ptr< monty::ndarray< int64_t,1 > > inst{};
      std::shared_ptr< monty::ndarray< double,1 > > cof_v{};
      std::shared_ptr< monty::ndarray< int64_t,1 > > subj{};
      std::shared_ptr< monty::ndarray< int64_t,1 > > ptrb{};
      std::shared_ptr< monty::ndarray< double,1 > > bfix{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > shape{};

      virtual void destroy();

      static Expr::t _new_Expr(std::shared_ptr< monty::ndarray< int64_t,1 > > _7222_ptrb,std::shared_ptr< monty::ndarray< int64_t,1 > > _7223_subj,std::shared_ptr< monty::ndarray< double,1 > > _7224_cof,std::shared_ptr< monty::ndarray< double,1 > > _7225_bfix,std::shared_ptr< monty::ndarray< int32_t,1 > > _7226_shape,std::shared_ptr< monty::ndarray< int64_t,1 > > _7227_inst);
      void _initialize(std::shared_ptr< monty::ndarray< int64_t,1 > > _7222_ptrb,std::shared_ptr< monty::ndarray< int64_t,1 > > _7223_subj,std::shared_ptr< monty::ndarray< double,1 > > _7224_cof,std::shared_ptr< monty::ndarray< double,1 > > _7225_bfix,std::shared_ptr< monty::ndarray< int32_t,1 > > _7226_shape,std::shared_ptr< monty::ndarray< int64_t,1 > > _7227_inst);
      static Expr::t _new_Expr(std::shared_ptr< monty::ndarray< int64_t,1 > > _7238_ptrb,std::shared_ptr< monty::ndarray< int64_t,1 > > _7239_subj,std::shared_ptr< monty::ndarray< double,1 > > _7240_cof,std::shared_ptr< monty::ndarray< double,1 > > _7241_bfix,std::shared_ptr< monty::ndarray< int32_t,1 > > _7242_shp,std::shared_ptr< monty::ndarray< int64_t,1 > > _7243_inst,int32_t _7244_unchecked_);
      void _initialize(std::shared_ptr< monty::ndarray< int64_t,1 > > _7238_ptrb,std::shared_ptr< monty::ndarray< int64_t,1 > > _7239_subj,std::shared_ptr< monty::ndarray< double,1 > > _7240_cof,std::shared_ptr< monty::ndarray< double,1 > > _7241_bfix,std::shared_ptr< monty::ndarray< int32_t,1 > > _7242_shp,std::shared_ptr< monty::ndarray< int64_t,1 > > _7243_inst,int32_t _7244_unchecked_);
      static Expr::t _new_Expr(monty::rc_ptr< ::mosek::fusion::Expression > _7245_e);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Expression > _7245_e);
      virtual int64_t prod(std::shared_ptr< monty::ndarray< int32_t,1 > > _7270_vals) ;
      static  std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::Variable >,1 > > varstack(std::shared_ptr< monty::ndarray< std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::Variable >,1 > >,1 > > _7273_vs);
      static  std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::Variable >,1 > > varstack(std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::Variable >,1 > > _7276_v1,std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::Variable >,1 > > _7277_v2);
      static  monty::rc_ptr< ::mosek::fusion::Expression > condense(monty::rc_ptr< ::mosek::fusion::Expression > _7281_e);
      static  monty::rc_ptr< ::mosek::fusion::Expression > flatten(monty::rc_ptr< ::mosek::fusion::Expression > _7282_e);
      static  monty::rc_ptr< ::mosek::fusion::Expression > reshape(monty::rc_ptr< ::mosek::fusion::Expression > _7284_e,int32_t _7285_dimi,int32_t _7286_dimj);
      static  monty::rc_ptr< ::mosek::fusion::Expression > reshape(monty::rc_ptr< ::mosek::fusion::Expression > _7287_e,int32_t _7288_size);
      static  monty::rc_ptr< ::mosek::fusion::Expression > reshape(monty::rc_ptr< ::mosek::fusion::Expression > _7289_e,std::shared_ptr< monty::ndarray< int32_t,1 > > _7290_newshape);
      static  monty::rc_ptr< ::mosek::fusion::Expression > zeros(std::shared_ptr< monty::ndarray< int32_t,1 > > _7291_shp);
      static  monty::rc_ptr< ::mosek::fusion::Expression > zeros(int32_t _7292_size);
      static  monty::rc_ptr< ::mosek::fusion::Expression > ones();
      static  monty::rc_ptr< ::mosek::fusion::Expression > ones(std::shared_ptr< monty::ndarray< int32_t,1 > > _7293_shp,std::shared_ptr< monty::ndarray< int32_t,2 > > _7294_sparsity);
      static  monty::rc_ptr< ::mosek::fusion::Expression > ones(std::shared_ptr< monty::ndarray< int32_t,1 > > _7295_shp);
      static  monty::rc_ptr< ::mosek::fusion::Expression > ones(int32_t _7296_size);
      static  monty::rc_ptr< ::mosek::fusion::Expression > constTerm(monty::rc_ptr< ::mosek::fusion::NDSparseArray > _7297_nda);
      static  monty::rc_ptr< ::mosek::fusion::Expression > constTerm(monty::rc_ptr< ::mosek::fusion::Matrix > _7298_m);
      static  monty::rc_ptr< ::mosek::fusion::Expression > constTerm(double _7307_val);
      static  monty::rc_ptr< ::mosek::fusion::Expression > constTerm(std::shared_ptr< monty::ndarray< int32_t,1 > > _7308_shp,std::shared_ptr< monty::ndarray< int32_t,2 > > _7309_sparsity,double _7310_val);
      static  monty::rc_ptr< ::mosek::fusion::Expression > constTerm(std::shared_ptr< monty::ndarray< int32_t,1 > > _7318_shp,std::shared_ptr< monty::ndarray< int32_t,2 > > _7319_sparsity,std::shared_ptr< monty::ndarray< double,1 > > _7320_vals1);
      static  monty::rc_ptr< ::mosek::fusion::Expression > constTerm(std::shared_ptr< monty::ndarray< int32_t,1 > > _7328_shp,double _7329_val);
      static  monty::rc_ptr< ::mosek::fusion::Expression > constTerm(int32_t _7330_size,double _7331_val);
      static  monty::rc_ptr< ::mosek::fusion::Expression > constTerm(std::shared_ptr< monty::ndarray< double,2 > > _7333_vals2);
      static  monty::rc_ptr< ::mosek::fusion::Expression > constTerm(std::shared_ptr< monty::ndarray< double,1 > > _7336_vals1);
      static  monty::rc_ptr< ::mosek::fusion::Expression > sum(monty::rc_ptr< ::mosek::fusion::Expression > _7337_expr,int32_t _7338_dim);
      static  monty::rc_ptr< ::mosek::fusion::Expression > sum(monty::rc_ptr< ::mosek::fusion::Expression > _7339_expr);
      static  monty::rc_ptr< ::mosek::fusion::Expression > neg(monty::rc_ptr< ::mosek::fusion::Expression > _7340_e);
      static  monty::rc_ptr< ::mosek::fusion::Expression > mulDiag(bool _7341_left,monty::rc_ptr< ::mosek::fusion::Matrix > _7342_mx,monty::rc_ptr< ::mosek::fusion::Expression > _7343_expr);
      static  monty::rc_ptr< ::mosek::fusion::Expression > mulDiag(monty::rc_ptr< ::mosek::fusion::Variable > _7350_v,monty::rc_ptr< ::mosek::fusion::Parameter > _7351_p);
      static  monty::rc_ptr< ::mosek::fusion::Expression > mulDiag(monty::rc_ptr< ::mosek::fusion::Parameter > _7352_p,monty::rc_ptr< ::mosek::fusion::Variable > _7353_v);
      static  monty::rc_ptr< ::mosek::fusion::Expression > mulDiag(monty::rc_ptr< ::mosek::fusion::Expression > _7354_expr,monty::rc_ptr< ::mosek::fusion::Parameter > _7355_p);
      static  monty::rc_ptr< ::mosek::fusion::Expression > mulDiag(monty::rc_ptr< ::mosek::fusion::Parameter > _7356_p,monty::rc_ptr< ::mosek::fusion::Expression > _7357_expr);
      static  monty::rc_ptr< ::mosek::fusion::Expression > mulDiag(monty::rc_ptr< ::mosek::fusion::Variable > _7358_v,monty::rc_ptr< ::mosek::fusion::Matrix > _7359_mx);
      static  monty::rc_ptr< ::mosek::fusion::Expression > mulDiag(monty::rc_ptr< ::mosek::fusion::Matrix > _7360_mx,monty::rc_ptr< ::mosek::fusion::Variable > _7361_v);
      static  monty::rc_ptr< ::mosek::fusion::Expression > mulDiag(monty::rc_ptr< ::mosek::fusion::Expression > _7362_expr,monty::rc_ptr< ::mosek::fusion::Matrix > _7363_mx);
      static  monty::rc_ptr< ::mosek::fusion::Expression > mulDiag(monty::rc_ptr< ::mosek::fusion::Matrix > _7364_mx,monty::rc_ptr< ::mosek::fusion::Expression > _7365_expr);
      static  monty::rc_ptr< ::mosek::fusion::Expression > mulDiag(monty::rc_ptr< ::mosek::fusion::Variable > _7366_v,std::shared_ptr< monty::ndarray< double,2 > > _7367_a);
      static  monty::rc_ptr< ::mosek::fusion::Expression > mulDiag(monty::rc_ptr< ::mosek::fusion::Expression > _7374_expr,std::shared_ptr< monty::ndarray< double,2 > > _7375_a);
      static  monty::rc_ptr< ::mosek::fusion::Expression > mulDiag(std::shared_ptr< monty::ndarray< double,2 > > _7382_a,monty::rc_ptr< ::mosek::fusion::Variable > _7383_v);
      static  monty::rc_ptr< ::mosek::fusion::Expression > mulDiag(std::shared_ptr< monty::ndarray< double,2 > > _7390_a,monty::rc_ptr< ::mosek::fusion::Expression > _7391_expr);
      static  monty::rc_ptr< ::mosek::fusion::Expression > mulElm_(monty::rc_ptr< ::mosek::fusion::Matrix > _7398_m,monty::rc_ptr< ::mosek::fusion::Expression > _7399_e);
      static  monty::rc_ptr< ::mosek::fusion::Expression > mulElm_(std::shared_ptr< monty::ndarray< double,1 > > _7408_a,monty::rc_ptr< ::mosek::fusion::Expression > _7409_expr);
      static  monty::rc_ptr< ::mosek::fusion::Expression > mulElm_(monty::rc_ptr< ::mosek::fusion::NDSparseArray > _7411_spm,monty::rc_ptr< ::mosek::fusion::Expression > _7412_expr);
      static  monty::rc_ptr< ::mosek::fusion::Expression > mul(monty::rc_ptr< ::mosek::fusion::Expression > _7415_expr,double _7416_c);
      static  monty::rc_ptr< ::mosek::fusion::Expression > mul(double _7417_c,monty::rc_ptr< ::mosek::fusion::Expression > _7418_expr);
      static  monty::rc_ptr< ::mosek::fusion::Expression > mul(monty::rc_ptr< ::mosek::fusion::Expression > _7419_expr,std::shared_ptr< monty::ndarray< double,1 > > _7420_a);
      static  monty::rc_ptr< ::mosek::fusion::Expression > mul(std::shared_ptr< monty::ndarray< double,1 > > _7421_a,monty::rc_ptr< ::mosek::fusion::Expression > _7422_expr);
      static  monty::rc_ptr< ::mosek::fusion::Expression > mul(monty::rc_ptr< ::mosek::fusion::Expression > _7423_expr,std::shared_ptr< monty::ndarray< double,2 > > _7424_a);
      static  monty::rc_ptr< ::mosek::fusion::Expression > mul(std::shared_ptr< monty::ndarray< double,2 > > _7425_a,monty::rc_ptr< ::mosek::fusion::Expression > _7426_expr);
      static  monty::rc_ptr< ::mosek::fusion::Expression > mul(monty::rc_ptr< ::mosek::fusion::Expression > _7427_expr,monty::rc_ptr< ::mosek::fusion::Matrix > _7428_mx);
      static  monty::rc_ptr< ::mosek::fusion::Expression > mul(monty::rc_ptr< ::mosek::fusion::Matrix > _7429_mx,monty::rc_ptr< ::mosek::fusion::Expression > _7430_expr);
      static  monty::rc_ptr< ::mosek::fusion::Expression > mul(bool _7431_left,std::shared_ptr< monty::ndarray< double,1 > > _7432_mx,monty::rc_ptr< ::mosek::fusion::Expression > _7433_e);
      static  monty::rc_ptr< ::mosek::fusion::Expression > mul(bool _7448_left,std::shared_ptr< monty::ndarray< double,2 > > _7449_mx,monty::rc_ptr< ::mosek::fusion::Expression > _7450_e);
      static  monty::rc_ptr< ::mosek::fusion::Expression > mul(bool _7465_left,monty::rc_ptr< ::mosek::fusion::Matrix > _7466_mx,monty::rc_ptr< ::mosek::fusion::Expression > _7467_e);
      static  monty::rc_ptr< ::mosek::fusion::Expression > mul(monty::rc_ptr< ::mosek::fusion::Variable > _7476_v,monty::rc_ptr< ::mosek::fusion::Matrix > _7477_mx);
      static  monty::rc_ptr< ::mosek::fusion::Expression > mul(monty::rc_ptr< ::mosek::fusion::Matrix > _7483_mx,monty::rc_ptr< ::mosek::fusion::Variable > _7484_v);
      static  monty::rc_ptr< ::mosek::fusion::Expression > mul(bool _7490_left,int32_t _7491_mdimi,int32_t _7492_mdimj,std::shared_ptr< monty::ndarray< int32_t,1 > > _7493_msubi,std::shared_ptr< monty::ndarray< int32_t,1 > > _7494_msubj,std::shared_ptr< monty::ndarray< double,1 > > _7495_mcof,monty::rc_ptr< ::mosek::fusion::Variable > _7496_v);
      static  monty::rc_ptr< ::mosek::fusion::Expression > mul(monty::rc_ptr< ::mosek::fusion::Expression > _7498_expr,monty::rc_ptr< ::mosek::fusion::Parameter > _7499_p);
      static  monty::rc_ptr< ::mosek::fusion::Expression > mul(monty::rc_ptr< ::mosek::fusion::Parameter > _7500_p,monty::rc_ptr< ::mosek::fusion::Expression > _7501_expr);
      static  monty::rc_ptr< ::mosek::fusion::Expression > dot(monty::rc_ptr< ::mosek::fusion::Expression > _7502_e,monty::rc_ptr< ::mosek::fusion::Matrix > _7503_m);
      static  monty::rc_ptr< ::mosek::fusion::Expression > dot(monty::rc_ptr< ::mosek::fusion::Expression > _7511_e,std::shared_ptr< monty::ndarray< double,2 > > _7512_c2);
      static  monty::rc_ptr< ::mosek::fusion::Expression > dot(monty::rc_ptr< ::mosek::fusion::Expression > _7516_e,monty::rc_ptr< ::mosek::fusion::NDSparseArray > _7517_nda);
      static  monty::rc_ptr< ::mosek::fusion::Expression > dot(monty::rc_ptr< ::mosek::fusion::Expression > _7518_e,std::shared_ptr< monty::ndarray< double,1 > > _7519_c1);
      static  monty::rc_ptr< ::mosek::fusion::Expression > dot(monty::rc_ptr< ::mosek::fusion::Matrix > _7524_m,monty::rc_ptr< ::mosek::fusion::Expression > _7525_e);
      static  monty::rc_ptr< ::mosek::fusion::Expression > dot(monty::rc_ptr< ::mosek::fusion::NDSparseArray > _7526_nda,monty::rc_ptr< ::mosek::fusion::Expression > _7527_e);
      static  monty::rc_ptr< ::mosek::fusion::Expression > dot(std::shared_ptr< monty::ndarray< double,2 > > _7528_c2,monty::rc_ptr< ::mosek::fusion::Expression > _7529_e);
      static  monty::rc_ptr< ::mosek::fusion::Expression > dot(std::shared_ptr< monty::ndarray< double,1 > > _7530_c1,monty::rc_ptr< ::mosek::fusion::Expression > _7531_e);
      static  monty::rc_ptr< ::mosek::fusion::Expression > dot(monty::rc_ptr< ::mosek::fusion::Expression > _7532_e,monty::rc_ptr< ::mosek::fusion::Parameter > _7533_p);
      static  monty::rc_ptr< ::mosek::fusion::Expression > dot(monty::rc_ptr< ::mosek::fusion::Parameter > _7534_p,monty::rc_ptr< ::mosek::fusion::Expression > _7535_e);
      static  monty::rc_ptr< ::mosek::fusion::Expression > outer(monty::rc_ptr< ::mosek::fusion::Parameter > _7536_p,monty::rc_ptr< ::mosek::fusion::Expression > _7537_e);
      static  monty::rc_ptr< ::mosek::fusion::Expression > outer(monty::rc_ptr< ::mosek::fusion::Expression > _7540_e,monty::rc_ptr< ::mosek::fusion::Parameter > _7541_p);
      static  monty::rc_ptr< ::mosek::fusion::Expression > outer(monty::rc_ptr< ::mosek::fusion::Matrix > _7544_m,monty::rc_ptr< ::mosek::fusion::Expression > _7545_e);
      static  monty::rc_ptr< ::mosek::fusion::Expression > outer(monty::rc_ptr< ::mosek::fusion::Expression > _7547_e,monty::rc_ptr< ::mosek::fusion::Matrix > _7548_m);
      static  monty::rc_ptr< ::mosek::fusion::Expression > outer(std::shared_ptr< monty::ndarray< double,1 > > _7550_a,monty::rc_ptr< ::mosek::fusion::Expression > _7551_e);
      static  monty::rc_ptr< ::mosek::fusion::Expression > outer(monty::rc_ptr< ::mosek::fusion::Expression > _7553_e,std::shared_ptr< monty::ndarray< double,1 > > _7554_a);
      static  monty::rc_ptr< ::mosek::fusion::Expression > outer_(int32_t _7556_edim,std::shared_ptr< monty::ndarray< int64_t,1 > > _7557_eptrb,std::shared_ptr< monty::ndarray< int64_t,1 > > _7558_esubj,std::shared_ptr< monty::ndarray< double,1 > > _7559_ecof,std::shared_ptr< monty::ndarray< double,1 > > _7560_ebfix,std::shared_ptr< monty::ndarray< int64_t,1 > > _7561_einst,std::shared_ptr< monty::ndarray< double,1 > > _7562_a,std::shared_ptr< monty::ndarray< int32_t,1 > > _7563_sub,int32_t _7564_dim,bool _7565_transpose);
      static  monty::rc_ptr< ::mosek::fusion::Expression > outer_(monty::rc_ptr< ::mosek::fusion::Variable > _7595_v,int32_t _7596_vdim,std::shared_ptr< monty::ndarray< double,1 > > _7597_a,std::shared_ptr< monty::ndarray< int32_t,1 > > _7598_sub,int32_t _7599_dim,bool _7600_transpose);
      static  monty::rc_ptr< ::mosek::fusion::Expression > stack(std::shared_ptr< monty::ndarray< std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::Expression >,1 > >,1 > > _7617_exprs);
      static  monty::rc_ptr< ::mosek::fusion::Expression > vstack(double _7623_a1,double _7624_a2,double _7625_a3);
      static  monty::rc_ptr< ::mosek::fusion::Expression > vstack(double _7626_a1,double _7627_a2,monty::rc_ptr< ::mosek::fusion::Expression > _7628_e3);
      static  monty::rc_ptr< ::mosek::fusion::Expression > vstack(double _7629_a1,monty::rc_ptr< ::mosek::fusion::Expression > _7630_e2,double _7631_a3);
      static  monty::rc_ptr< ::mosek::fusion::Expression > vstack(double _7632_a1,monty::rc_ptr< ::mosek::fusion::Expression > _7633_e2,monty::rc_ptr< ::mosek::fusion::Expression > _7634_e3);
      static  monty::rc_ptr< ::mosek::fusion::Expression > vstack(monty::rc_ptr< ::mosek::fusion::Expression > _7635_e1,double _7636_a2,double _7637_a3);
      static  monty::rc_ptr< ::mosek::fusion::Expression > vstack(monty::rc_ptr< ::mosek::fusion::Expression > _7638_e1,double _7639_a2,monty::rc_ptr< ::mosek::fusion::Expression > _7640_e3);
      static  monty::rc_ptr< ::mosek::fusion::Expression > vstack(monty::rc_ptr< ::mosek::fusion::Expression > _7641_e1,monty::rc_ptr< ::mosek::fusion::Expression > _7642_e2,double _7643_a3);
      static  monty::rc_ptr< ::mosek::fusion::Expression > vstack(monty::rc_ptr< ::mosek::fusion::Expression > _7644_e1,monty::rc_ptr< ::mosek::fusion::Expression > _7645_e2,monty::rc_ptr< ::mosek::fusion::Expression > _7646_e3);
      static  monty::rc_ptr< ::mosek::fusion::Expression > vstack(double _7647_a1,monty::rc_ptr< ::mosek::fusion::Expression > _7648_e2);
      static  monty::rc_ptr< ::mosek::fusion::Expression > vstack(monty::rc_ptr< ::mosek::fusion::Expression > _7649_e1,double _7650_a2);
      static  monty::rc_ptr< ::mosek::fusion::Expression > vstack(monty::rc_ptr< ::mosek::fusion::Expression > _7651_e1,monty::rc_ptr< ::mosek::fusion::Expression > _7652_e2);
      static  monty::rc_ptr< ::mosek::fusion::Expression > vstack(std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::Expression >,1 > > _7653_exprs);
      static  monty::rc_ptr< ::mosek::fusion::Expression > hstack(monty::rc_ptr< ::mosek::fusion::Expression > _7655_e1,monty::rc_ptr< ::mosek::fusion::Expression > _7656_e2,monty::rc_ptr< ::mosek::fusion::Expression > _7657_e3);
      static  monty::rc_ptr< ::mosek::fusion::Expression > hstack(monty::rc_ptr< ::mosek::fusion::Expression > _7658_e1,monty::rc_ptr< ::mosek::fusion::Expression > _7659_e2,double _7660_a3);
      static  monty::rc_ptr< ::mosek::fusion::Expression > hstack(monty::rc_ptr< ::mosek::fusion::Expression > _7661_e1,double _7662_a2,monty::rc_ptr< ::mosek::fusion::Expression > _7663_e3);
      static  monty::rc_ptr< ::mosek::fusion::Expression > hstack(monty::rc_ptr< ::mosek::fusion::Expression > _7664_e1,double _7665_a2,double _7666_a3);
      static  monty::rc_ptr< ::mosek::fusion::Expression > hstack(double _7667_a1,monty::rc_ptr< ::mosek::fusion::Expression > _7668_e2,monty::rc_ptr< ::mosek::fusion::Expression > _7669_e3);
      static  monty::rc_ptr< ::mosek::fusion::Expression > hstack(double _7670_a1,monty::rc_ptr< ::mosek::fusion::Expression > _7671_e2,double _7672_a3);
      static  monty::rc_ptr< ::mosek::fusion::Expression > hstack(double _7673_a1,double _7674_a2,monty::rc_ptr< ::mosek::fusion::Expression > _7675_e3);
      static  monty::rc_ptr< ::mosek::fusion::Expression > hstack(double _7676_a1,monty::rc_ptr< ::mosek::fusion::Expression > _7677_e2);
      static  monty::rc_ptr< ::mosek::fusion::Expression > hstack(monty::rc_ptr< ::mosek::fusion::Expression > _7678_e1,double _7679_a2);
      static  monty::rc_ptr< ::mosek::fusion::Expression > hstack(monty::rc_ptr< ::mosek::fusion::Expression > _7680_e1,monty::rc_ptr< ::mosek::fusion::Expression > _7681_e2);
      static  monty::rc_ptr< ::mosek::fusion::Expression > hstack(std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::Expression >,1 > > _7682_exprs);
      static  monty::rc_ptr< ::mosek::fusion::Expression > stack(int32_t _7684_dim,monty::rc_ptr< ::mosek::fusion::Expression > _7685_e1,monty::rc_ptr< ::mosek::fusion::Expression > _7686_e2,monty::rc_ptr< ::mosek::fusion::Expression > _7687_e3);
      static  monty::rc_ptr< ::mosek::fusion::Expression > stack(int32_t _7688_dim,monty::rc_ptr< ::mosek::fusion::Expression > _7689_e1,monty::rc_ptr< ::mosek::fusion::Expression > _7690_e2,double _7691_a3);
      static  monty::rc_ptr< ::mosek::fusion::Expression > stack(int32_t _7692_dim,monty::rc_ptr< ::mosek::fusion::Expression > _7693_e1,double _7694_a2,monty::rc_ptr< ::mosek::fusion::Expression > _7695_e3);
      static  monty::rc_ptr< ::mosek::fusion::Expression > stack(int32_t _7696_dim,monty::rc_ptr< ::mosek::fusion::Expression > _7697_e1,double _7698_a2,double _7699_a3);
      static  monty::rc_ptr< ::mosek::fusion::Expression > stack(int32_t _7700_dim,double _7701_a1,monty::rc_ptr< ::mosek::fusion::Expression > _7702_e2,monty::rc_ptr< ::mosek::fusion::Expression > _7703_e3);
      static  monty::rc_ptr< ::mosek::fusion::Expression > stack(int32_t _7704_dim,double _7705_a1,monty::rc_ptr< ::mosek::fusion::Expression > _7706_e2,double _7707_a3);
      static  monty::rc_ptr< ::mosek::fusion::Expression > stack(int32_t _7708_dim,double _7709_a1,double _7710_a2,monty::rc_ptr< ::mosek::fusion::Expression > _7711_e1);
      static  monty::rc_ptr< ::mosek::fusion::Expression > stack(int32_t _7712_dim,double _7713_a1,monty::rc_ptr< ::mosek::fusion::Expression > _7714_e2);
      static  monty::rc_ptr< ::mosek::fusion::Expression > stack(int32_t _7715_dim,monty::rc_ptr< ::mosek::fusion::Expression > _7716_e1,double _7717_a2);
      static  monty::rc_ptr< ::mosek::fusion::Expression > stack(int32_t _7718_dim,monty::rc_ptr< ::mosek::fusion::Expression > _7719_e1,monty::rc_ptr< ::mosek::fusion::Expression > _7720_e2);
      static  monty::rc_ptr< ::mosek::fusion::Expression > stack(int32_t _7721_dim,std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::Expression >,1 > > _7722_exprs);
      static  monty::rc_ptr< ::mosek::fusion::Expression > stack_(std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::Expression >,1 > > _7723_exprs,int32_t _7724_dim);
      static  std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::Expression >,1 > > promote(std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::Expression >,1 > > _7725_exprs,int32_t _7726_dim);
      static  monty::rc_ptr< ::mosek::fusion::Expression > repeat(monty::rc_ptr< ::mosek::fusion::Variable > _7739_x,int32_t _7740_n,int32_t _7741_d);
      static  monty::rc_ptr< ::mosek::fusion::Expression > repeat(monty::rc_ptr< ::mosek::fusion::Expression > _7742_e,int32_t _7743_n,int32_t _7744_d);
      static  monty::rc_ptr< ::mosek::fusion::Expression > add(std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::Expression >,1 > > _7747_exps);
      static  monty::rc_ptr< ::mosek::fusion::Expression > add(std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::Variable >,1 > > _7749_vs);
      static  monty::rc_ptr< ::mosek::fusion::Expression > add_(monty::rc_ptr< ::mosek::fusion::Expression > _7782_e1,double _7783_m1,monty::rc_ptr< ::mosek::fusion::Expression > _7784_e2,double _7785_m2);
      static  monty::rc_ptr< ::mosek::fusion::Expression > transpose(monty::rc_ptr< ::mosek::fusion::Expression > _7796_e);
      static  monty::rc_ptr< ::mosek::fusion::Expression > mulElm(monty::rc_ptr< ::mosek::fusion::Matrix > _7797_m,monty::rc_ptr< ::mosek::fusion::Expression > _7798_expr);
      static  monty::rc_ptr< ::mosek::fusion::Expression > mulElm(monty::rc_ptr< ::mosek::fusion::NDSparseArray > _7799_spm,monty::rc_ptr< ::mosek::fusion::Expression > _7800_expr);
      static  monty::rc_ptr< ::mosek::fusion::Expression > mulElm(std::shared_ptr< monty::ndarray< double,2 > > _7801_a2,monty::rc_ptr< ::mosek::fusion::Expression > _7802_expr);
      static  monty::rc_ptr< ::mosek::fusion::Expression > mulElm(std::shared_ptr< monty::ndarray< double,1 > > _7803_a1,monty::rc_ptr< ::mosek::fusion::Expression > _7804_expr);
      static  monty::rc_ptr< ::mosek::fusion::Expression > mulElm(monty::rc_ptr< ::mosek::fusion::Expression > _7805_expr,monty::rc_ptr< ::mosek::fusion::Matrix > _7806_m);
      static  monty::rc_ptr< ::mosek::fusion::Expression > mulElm(monty::rc_ptr< ::mosek::fusion::Expression > _7807_expr,std::shared_ptr< monty::ndarray< double,2 > > _7808_a2);
      static  monty::rc_ptr< ::mosek::fusion::Expression > mulElm(monty::rc_ptr< ::mosek::fusion::Expression > _7809_expr,std::shared_ptr< monty::ndarray< double,1 > > _7810_a1);
      static  monty::rc_ptr< ::mosek::fusion::Expression > mulElm(monty::rc_ptr< ::mosek::fusion::Expression > _7811_expr,monty::rc_ptr< ::mosek::fusion::NDSparseArray > _7812_spm);
      static  monty::rc_ptr< ::mosek::fusion::Expression > mulElm(monty::rc_ptr< ::mosek::fusion::Parameter > _7813_p,monty::rc_ptr< ::mosek::fusion::Expression > _7814_expr);
      static  monty::rc_ptr< ::mosek::fusion::Expression > mulElm(monty::rc_ptr< ::mosek::fusion::Expression > _7815_expr,monty::rc_ptr< ::mosek::fusion::Parameter > _7816_p);
      static  monty::rc_ptr< ::mosek::fusion::Expression > sub(monty::rc_ptr< ::mosek::fusion::NDSparseArray > _7817_n,monty::rc_ptr< ::mosek::fusion::Expression > _7818_e2);
      static  monty::rc_ptr< ::mosek::fusion::Expression > sub(monty::rc_ptr< ::mosek::fusion::Expression > _7819_e1,monty::rc_ptr< ::mosek::fusion::NDSparseArray > _7820_n);
      static  monty::rc_ptr< ::mosek::fusion::Expression > sub(monty::rc_ptr< ::mosek::fusion::Matrix > _7821_m,monty::rc_ptr< ::mosek::fusion::Expression > _7822_e2);
      static  monty::rc_ptr< ::mosek::fusion::Expression > sub(monty::rc_ptr< ::mosek::fusion::Expression > _7823_e1,monty::rc_ptr< ::mosek::fusion::Matrix > _7824_m);
      static  monty::rc_ptr< ::mosek::fusion::Expression > sub(double _7825_c,monty::rc_ptr< ::mosek::fusion::Expression > _7826_e2);
      static  monty::rc_ptr< ::mosek::fusion::Expression > sub(monty::rc_ptr< ::mosek::fusion::Expression > _7827_e1,double _7828_c);
      static  monty::rc_ptr< ::mosek::fusion::Expression > sub(std::shared_ptr< monty::ndarray< double,2 > > _7829_a2,monty::rc_ptr< ::mosek::fusion::Expression > _7830_e2);
      static  monty::rc_ptr< ::mosek::fusion::Expression > sub(std::shared_ptr< monty::ndarray< double,1 > > _7831_a1,monty::rc_ptr< ::mosek::fusion::Expression > _7832_e2);
      static  monty::rc_ptr< ::mosek::fusion::Expression > sub(monty::rc_ptr< ::mosek::fusion::Expression > _7833_e1,std::shared_ptr< monty::ndarray< double,2 > > _7834_a2);
      static  monty::rc_ptr< ::mosek::fusion::Expression > sub(monty::rc_ptr< ::mosek::fusion::Expression > _7835_e1,std::shared_ptr< monty::ndarray< double,1 > > _7836_a1);
      static  monty::rc_ptr< ::mosek::fusion::Expression > sub(monty::rc_ptr< ::mosek::fusion::Expression > _7837_e1,monty::rc_ptr< ::mosek::fusion::Expression > _7838_e2);
      static  monty::rc_ptr< ::mosek::fusion::Expression > add(monty::rc_ptr< ::mosek::fusion::NDSparseArray > _7839_n,monty::rc_ptr< ::mosek::fusion::Expression > _7840_e2);
      static  monty::rc_ptr< ::mosek::fusion::Expression > add(monty::rc_ptr< ::mosek::fusion::Expression > _7841_e1,monty::rc_ptr< ::mosek::fusion::NDSparseArray > _7842_n);
      static  monty::rc_ptr< ::mosek::fusion::Expression > add(monty::rc_ptr< ::mosek::fusion::Matrix > _7843_m,monty::rc_ptr< ::mosek::fusion::Expression > _7844_e2);
      static  monty::rc_ptr< ::mosek::fusion::Expression > add(monty::rc_ptr< ::mosek::fusion::Expression > _7845_e1,monty::rc_ptr< ::mosek::fusion::Matrix > _7846_m);
      static  monty::rc_ptr< ::mosek::fusion::Expression > add(double _7847_c,monty::rc_ptr< ::mosek::fusion::Expression > _7848_e2);
      static  monty::rc_ptr< ::mosek::fusion::Expression > add(monty::rc_ptr< ::mosek::fusion::Expression > _7849_e1,double _7850_c);
      static  monty::rc_ptr< ::mosek::fusion::Expression > add(std::shared_ptr< monty::ndarray< double,2 > > _7851_a2,monty::rc_ptr< ::mosek::fusion::Expression > _7852_e2);
      static  monty::rc_ptr< ::mosek::fusion::Expression > add(std::shared_ptr< monty::ndarray< double,1 > > _7853_a1,monty::rc_ptr< ::mosek::fusion::Expression > _7854_e2);
      static  monty::rc_ptr< ::mosek::fusion::Expression > add(monty::rc_ptr< ::mosek::fusion::Expression > _7855_e1,std::shared_ptr< monty::ndarray< double,2 > > _7856_a2);
      static  monty::rc_ptr< ::mosek::fusion::Expression > add(monty::rc_ptr< ::mosek::fusion::Expression > _7857_e1,std::shared_ptr< monty::ndarray< double,1 > > _7858_a1);
      static  monty::rc_ptr< ::mosek::fusion::Expression > add(monty::rc_ptr< ::mosek::fusion::Expression > _7859_e1,monty::rc_ptr< ::mosek::fusion::Expression > _7860_e2);
      virtual /* override */ void eval(monty::rc_ptr< ::mosek::fusion::WorkStack > _7861_rs,monty::rc_ptr< ::mosek::fusion::WorkStack > _7862_ws,monty::rc_ptr< ::mosek::fusion::WorkStack > _7863_xs) ;
      static  void validateData(std::shared_ptr< monty::ndarray< int64_t,1 > > _7879_ptrb,std::shared_ptr< monty::ndarray< int64_t,1 > > _7880_subj,std::shared_ptr< monty::ndarray< double,1 > > _7881_cof,std::shared_ptr< monty::ndarray< double,1 > > _7882_bfix,std::shared_ptr< monty::ndarray< int32_t,1 > > _7883_shape,std::shared_ptr< monty::ndarray< int64_t,1 > > _7884_inst);
      static  monty::rc_ptr< ::mosek::fusion::Model > extractModel(std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::Variable >,1 > > _7897_v);
    }; // struct Expr;

    struct p_WorkStack
    {
      WorkStack * _pubthis;
      static mosek::fusion::p_WorkStack* _get_impl(mosek::fusion::WorkStack * _inst){ assert(_inst); assert(_inst->_impl); return _inst->_impl; }
      static mosek::fusion::p_WorkStack * _get_impl(mosek::fusion::WorkStack::t _inst) { return _get_impl(_inst.get()); }
      p_WorkStack(WorkStack * _pubthis);
      virtual ~p_WorkStack() { /* std::cout << "~p_WorkStack" << std::endl;*/ };
      int32_t code_base{};
      int32_t cconst_base{};
      int32_t codeptr_base{};
      int32_t cof_base{};
      int32_t nidxs_base{};
      int32_t sp_base{};
      int32_t shape_base{};
      int32_t ptr_base{};
      bool hassp{};
      int32_t ncodeatom{};
      int32_t nelem{};
      int32_t nnz{};
      int32_t nd{};
      int32_t pf64{};
      int32_t pi64{};
      int32_t pi32{};
      std::shared_ptr< monty::ndarray< double,1 > > f64{};
      std::shared_ptr< monty::ndarray< int64_t,1 > > i64{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > i32{};

      virtual void destroy();

      static WorkStack::t _new_WorkStack();
      void _initialize();
      virtual std::string formatCurrent() ;
      virtual bool peek_hassp() ;
      virtual int32_t peek_nnz() ;
      virtual int32_t peek_nelem() ;
      virtual int32_t peek_dim(int32_t _7161_i) ;
      virtual int32_t peek_nd() ;
      virtual void alloc_expr(int32_t _7162_nd,int32_t _7163_nelem,int32_t _7164_nnz,bool _7165_hassp) ;
      virtual void alloc_expr(int32_t _7166_nd,int32_t _7167_nelem,int32_t _7168_nnz,bool _7169_hassp,int32_t _7170_ncodeatom) ;
      virtual void pop_expr() ;
      virtual void move_expr(monty::rc_ptr< ::mosek::fusion::WorkStack > _7171_to) ;
      virtual void peek_expr() ;
      virtual void ensure_sparsity() ;
      virtual void clear() ;
      virtual int32_t allocf64(int32_t _7186_n) ;
      virtual int32_t alloci64(int32_t _7189_n) ;
      virtual int32_t alloci32(int32_t _7192_n) ;
      virtual void pushf64(double _7195_v) ;
      virtual void pushi64(int64_t _7196_v) ;
      virtual void pushi32(int32_t _7197_v) ;
      virtual void ensuref64(int32_t _7198_n) ;
      virtual void ensurei64(int32_t _7201_n) ;
      virtual void ensurei32(int32_t _7204_n) ;
      virtual int32_t popf64(int32_t _7207_n) ;
      virtual int32_t popi64(int32_t _7208_n) ;
      virtual int32_t popi32(int32_t _7209_n) ;
      virtual void popf64(int32_t _7210_n,std::shared_ptr< monty::ndarray< double,1 > > _7211_r,int32_t _7212_ofs) ;
      virtual void popi64(int32_t _7213_n,std::shared_ptr< monty::ndarray< int64_t,1 > > _7214_r,int32_t _7215_ofs) ;
      virtual void popi32(int32_t _7216_n,std::shared_ptr< monty::ndarray< int32_t,1 > > _7217_r,int32_t _7218_ofs) ;
      virtual double popf64() ;
      virtual int64_t popi64() ;
      virtual int32_t popi32() ;
      virtual double peekf64() ;
      virtual int64_t peeki64() ;
      virtual int32_t peeki32() ;
      virtual double peekf64(int32_t _7219_i) ;
      virtual int64_t peeki64(int32_t _7220_i) ;
      virtual int32_t peeki32(int32_t _7221_i) ;
    }; // struct WorkStack;

    struct p_SymmetricMatrix
    {
      SymmetricMatrix * _pubthis;
      static mosek::fusion::p_SymmetricMatrix* _get_impl(mosek::fusion::SymmetricMatrix * _inst){ assert(_inst); assert(_inst->_impl); return _inst->_impl; }
      static mosek::fusion::p_SymmetricMatrix * _get_impl(mosek::fusion::SymmetricMatrix::t _inst) { return _get_impl(_inst.get()); }
      p_SymmetricMatrix(SymmetricMatrix * _pubthis);
      virtual ~p_SymmetricMatrix() { /* std::cout << "~p_SymmetricMatrix" << std::endl;*/ };
      int32_t nnz{};
      double scale{};
      std::shared_ptr< monty::ndarray< double,1 > > vval{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > vsubj{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > vsubi{};
      std::shared_ptr< monty::ndarray< double,1 > > uval{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > usubj{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > usubi{};
      int32_t d1{};
      int32_t d0{};

      virtual void destroy();

      static SymmetricMatrix::t _new_SymmetricMatrix(int32_t _7910_dim0,int32_t _7911_dim1,std::shared_ptr< monty::ndarray< int32_t,1 > > _7912_usubi,std::shared_ptr< monty::ndarray< int32_t,1 > > _7913_usubj,std::shared_ptr< monty::ndarray< double,1 > > _7914_uval,std::shared_ptr< monty::ndarray< int32_t,1 > > _7915_vsubi,std::shared_ptr< monty::ndarray< int32_t,1 > > _7916_vsubj,std::shared_ptr< monty::ndarray< double,1 > > _7917_vval,double _7918_scale);
      void _initialize(int32_t _7910_dim0,int32_t _7911_dim1,std::shared_ptr< monty::ndarray< int32_t,1 > > _7912_usubi,std::shared_ptr< monty::ndarray< int32_t,1 > > _7913_usubj,std::shared_ptr< monty::ndarray< double,1 > > _7914_uval,std::shared_ptr< monty::ndarray< int32_t,1 > > _7915_vsubi,std::shared_ptr< monty::ndarray< int32_t,1 > > _7916_vsubj,std::shared_ptr< monty::ndarray< double,1 > > _7917_vval,double _7918_scale);
      static  monty::rc_ptr< ::mosek::fusion::SymmetricMatrix > rankOne(int32_t _7919_n,std::shared_ptr< monty::ndarray< int32_t,1 > > _7920_sub,std::shared_ptr< monty::ndarray< double,1 > > _7921_v);
      static  monty::rc_ptr< ::mosek::fusion::SymmetricMatrix > rankOne(std::shared_ptr< monty::ndarray< double,1 > > _7929_v);
      static  monty::rc_ptr< ::mosek::fusion::SymmetricMatrix > antiDiag(std::shared_ptr< monty::ndarray< double,1 > > _7937_vals);
      static  monty::rc_ptr< ::mosek::fusion::SymmetricMatrix > diag(std::shared_ptr< monty::ndarray< double,1 > > _7944_vals);
      virtual monty::rc_ptr< ::mosek::fusion::SymmetricMatrix > __mosek_2fusion_2SymmetricMatrix__add(monty::rc_ptr< ::mosek::fusion::SymmetricMatrix > _7950_m) ;
      virtual monty::rc_ptr< ::mosek::fusion::SymmetricMatrix > __mosek_2fusion_2SymmetricMatrix__sub(monty::rc_ptr< ::mosek::fusion::SymmetricMatrix > _7970_m) ;
      virtual monty::rc_ptr< ::mosek::fusion::SymmetricMatrix > __mosek_2fusion_2SymmetricMatrix__mul(double _7971_v) ;
      virtual int32_t getdim() ;
    }; // struct SymmetricMatrix;

    struct p_NDSparseArray
    {
      NDSparseArray * _pubthis;
      static mosek::fusion::p_NDSparseArray* _get_impl(mosek::fusion::NDSparseArray * _inst){ assert(_inst); assert(_inst->_impl); return _inst->_impl; }
      static mosek::fusion::p_NDSparseArray * _get_impl(mosek::fusion::NDSparseArray::t _inst) { return _get_impl(_inst.get()); }
      p_NDSparseArray(NDSparseArray * _pubthis);
      virtual ~p_NDSparseArray() { /* std::cout << "~p_NDSparseArray" << std::endl;*/ };
      std::shared_ptr< monty::ndarray< double,1 > > cof{};
      std::shared_ptr< monty::ndarray< int64_t,1 > > inst{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > dims{};
      int64_t size{};

      virtual void destroy();

      static NDSparseArray::t _new_NDSparseArray(std::shared_ptr< monty::ndarray< int32_t,1 > > _7972_dims_,std::shared_ptr< monty::ndarray< int32_t,2 > > _7973_sub,std::shared_ptr< monty::ndarray< double,1 > > _7974_cof_);
      void _initialize(std::shared_ptr< monty::ndarray< int32_t,1 > > _7972_dims_,std::shared_ptr< monty::ndarray< int32_t,2 > > _7973_sub,std::shared_ptr< monty::ndarray< double,1 > > _7974_cof_);
      static NDSparseArray::t _new_NDSparseArray(std::shared_ptr< monty::ndarray< int32_t,1 > > _7995_dims_,std::shared_ptr< monty::ndarray< int64_t,1 > > _7996_inst_,std::shared_ptr< monty::ndarray< double,1 > > _7997_cof_);
      void _initialize(std::shared_ptr< monty::ndarray< int32_t,1 > > _7995_dims_,std::shared_ptr< monty::ndarray< int64_t,1 > > _7996_inst_,std::shared_ptr< monty::ndarray< double,1 > > _7997_cof_);
      static NDSparseArray::t _new_NDSparseArray(monty::rc_ptr< ::mosek::fusion::Matrix > _8013_m);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Matrix > _8013_m);
      static  monty::rc_ptr< ::mosek::fusion::NDSparseArray > make(monty::rc_ptr< ::mosek::fusion::Matrix > _8021_m);
      static  monty::rc_ptr< ::mosek::fusion::NDSparseArray > make(std::shared_ptr< monty::ndarray< int32_t,1 > > _8022_dims,std::shared_ptr< monty::ndarray< int64_t,1 > > _8023_inst,std::shared_ptr< monty::ndarray< double,1 > > _8024_cof);
      static  monty::rc_ptr< ::mosek::fusion::NDSparseArray > make(std::shared_ptr< monty::ndarray< int32_t,1 > > _8025_dims,std::shared_ptr< monty::ndarray< int32_t,2 > > _8026_sub,std::shared_ptr< monty::ndarray< double,1 > > _8027_cof);
    }; // struct NDSparseArray;

    struct p_Matrix
    {
      Matrix * _pubthis;
      static mosek::fusion::p_Matrix* _get_impl(mosek::fusion::Matrix * _inst){ assert(_inst); assert(_inst->_impl); return _inst->_impl; }
      static mosek::fusion::p_Matrix * _get_impl(mosek::fusion::Matrix::t _inst) { return _get_impl(_inst.get()); }
      p_Matrix(Matrix * _pubthis);
      virtual ~p_Matrix() { /* std::cout << "~p_Matrix" << std::endl;*/ };
      int32_t dimj{};
      int32_t dimi{};

      virtual void destroy();

      static Matrix::t _new_Matrix(int32_t _8097_di,int32_t _8098_dj);
      void _initialize(int32_t _8097_di,int32_t _8098_dj);
      virtual /* override */ std::string toString() ;
      virtual void switchDims() ;
      static  monty::rc_ptr< ::mosek::fusion::Matrix > diag(int32_t _8100_num,monty::rc_ptr< ::mosek::fusion::Matrix > _8101_mv);
      static  monty::rc_ptr< ::mosek::fusion::Matrix > diag(std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::Matrix >,1 > > _8103_md);
      static  monty::rc_ptr< ::mosek::fusion::Matrix > antidiag(int32_t _8121_n,double _8122_val,int32_t _8123_k);
      static  monty::rc_ptr< ::mosek::fusion::Matrix > antidiag(int32_t _8124_n,double _8125_val);
      static  monty::rc_ptr< ::mosek::fusion::Matrix > diag(int32_t _8126_n,double _8127_val,int32_t _8128_k);
      static  monty::rc_ptr< ::mosek::fusion::Matrix > diag(int32_t _8129_n,double _8130_val);
      static  monty::rc_ptr< ::mosek::fusion::Matrix > antidiag(std::shared_ptr< monty::ndarray< double,1 > > _8131_d,int32_t _8132_k);
      static  monty::rc_ptr< ::mosek::fusion::Matrix > antidiag(std::shared_ptr< monty::ndarray< double,1 > > _8142_d);
      static  monty::rc_ptr< ::mosek::fusion::Matrix > diag(std::shared_ptr< monty::ndarray< double,1 > > _8143_d,int32_t _8144_k);
      static  monty::rc_ptr< ::mosek::fusion::Matrix > diag(std::shared_ptr< monty::ndarray< double,1 > > _8152_d);
      static  monty::rc_ptr< ::mosek::fusion::Matrix > ones(int32_t _8153_n,int32_t _8154_m);
      static  monty::rc_ptr< ::mosek::fusion::Matrix > eye(int32_t _8155_n);
      static  monty::rc_ptr< ::mosek::fusion::Matrix > dense(monty::rc_ptr< ::mosek::fusion::Matrix > _8157_other);
      static  monty::rc_ptr< ::mosek::fusion::Matrix > dense(int32_t _8158_dimi,int32_t _8159_dimj,double _8160_value);
      static  monty::rc_ptr< ::mosek::fusion::Matrix > dense(int32_t _8161_dimi,int32_t _8162_dimj,std::shared_ptr< monty::ndarray< double,1 > > _8163_data);
      static  monty::rc_ptr< ::mosek::fusion::Matrix > dense(std::shared_ptr< monty::ndarray< double,2 > > _8164_data);
      static  monty::rc_ptr< ::mosek::fusion::Matrix > sparse(monty::rc_ptr< ::mosek::fusion::Matrix > _8165_mx);
      static  monty::rc_ptr< ::mosek::fusion::Matrix > sparse(std::shared_ptr< monty::ndarray< std::shared_ptr< monty::ndarray< monty::rc_ptr< ::mosek::fusion::Matrix >,1 > >,1 > > _8169_blocks);
      static  monty::rc_ptr< ::mosek::fusion::Matrix > sparse(std::shared_ptr< monty::ndarray< double,2 > > _8200_data);
      static  monty::rc_ptr< ::mosek::fusion::Matrix > sparse(int32_t _8210_nrow,int32_t _8211_ncol);
      static  monty::rc_ptr< ::mosek::fusion::Matrix > sparse(int32_t _8212_nrow,int32_t _8213_ncol,std::shared_ptr< monty::ndarray< int32_t,1 > > _8214_subi,std::shared_ptr< monty::ndarray< int32_t,1 > > _8215_subj,double _8216_val);
      static  monty::rc_ptr< ::mosek::fusion::Matrix > sparse(std::shared_ptr< monty::ndarray< int32_t,1 > > _8218_subi,std::shared_ptr< monty::ndarray< int32_t,1 > > _8219_subj,double _8220_val);
      static  monty::rc_ptr< ::mosek::fusion::Matrix > sparse(std::shared_ptr< monty::ndarray< int32_t,1 > > _8225_subi,std::shared_ptr< monty::ndarray< int32_t,1 > > _8226_subj,std::shared_ptr< monty::ndarray< double,1 > > _8227_val);
      static  monty::rc_ptr< ::mosek::fusion::Matrix > sparse(int32_t _8232_nrow,int32_t _8233_ncol,std::shared_ptr< monty::ndarray< int32_t,1 > > _8234_subi,std::shared_ptr< monty::ndarray< int32_t,1 > > _8235_subj,std::shared_ptr< monty::ndarray< double,1 > > _8236_val);
      virtual double get(int32_t _8241_i,int32_t _8242_j) { throw monty::AbstractClassError("Call to abstract method"); }
      virtual bool isSparse() { throw monty::AbstractClassError("Call to abstract method"); }
      virtual std::shared_ptr< monty::ndarray< double,1 > > getDataAsArray() { throw monty::AbstractClassError("Call to abstract method"); }
      virtual void getDataAsTriplets(std::shared_ptr< monty::ndarray< int32_t,1 > > _8243_subi,std::shared_ptr< monty::ndarray< int32_t,1 > > _8244_subj,std::shared_ptr< monty::ndarray< double,1 > > _8245_val) { throw monty::AbstractClassError("Call to abstract method"); }
      virtual monty::rc_ptr< ::mosek::fusion::Matrix > __mosek_2fusion_2Matrix__transpose() { throw monty::AbstractClassError("Call to abstract method"); }
      virtual int64_t numNonzeros() { throw monty::AbstractClassError("Call to abstract method"); }
      virtual int32_t numColumns() ;
      virtual int32_t numRows() ;
    }; // struct Matrix;

    struct p_DenseMatrix : public ::mosek::fusion::p_Matrix
    {
      DenseMatrix * _pubthis;
      static mosek::fusion::p_DenseMatrix* _get_impl(mosek::fusion::DenseMatrix * _inst){ return static_cast< mosek::fusion::p_DenseMatrix* >(mosek::fusion::p_Matrix::_get_impl(_inst)); }
      static mosek::fusion::p_DenseMatrix * _get_impl(mosek::fusion::DenseMatrix::t _inst) { return _get_impl(_inst.get()); }
      p_DenseMatrix(DenseMatrix * _pubthis);
      virtual ~p_DenseMatrix() { /* std::cout << "~p_DenseMatrix" << std::endl;*/ };
      int64_t nnz{};
      std::shared_ptr< monty::ndarray< double,1 > > data{};

      virtual void destroy();

      static DenseMatrix::t _new_DenseMatrix(int32_t _8028_dimi_,int32_t _8029_dimj_,std::shared_ptr< monty::ndarray< double,1 > > _8030_cof);
      void _initialize(int32_t _8028_dimi_,int32_t _8029_dimj_,std::shared_ptr< monty::ndarray< double,1 > > _8030_cof);
      static DenseMatrix::t _new_DenseMatrix(monty::rc_ptr< ::mosek::fusion::Matrix > _8031_m_);
      void _initialize(monty::rc_ptr< ::mosek::fusion::Matrix > _8031_m_);
      static DenseMatrix::t _new_DenseMatrix(std::shared_ptr< monty::ndarray< double,2 > > _8036_d);
      void _initialize(std::shared_ptr< monty::ndarray< double,2 > > _8036_d);
      static DenseMatrix::t _new_DenseMatrix(int32_t _8039_dimi_,int32_t _8040_dimj_,double _8041_value_);
      void _initialize(int32_t _8039_dimi_,int32_t _8040_dimj_,double _8041_value_);
      virtual /* override */ std::string toString() ;
      virtual /* override */ monty::rc_ptr< ::mosek::fusion::Matrix > __mosek_2fusion_2DenseMatrix__transpose() ;
      virtual monty::rc_ptr< ::mosek::fusion::Matrix > __mosek_2fusion_2Matrix__transpose() { return __mosek_2fusion_2DenseMatrix__transpose(); }
      virtual /* override */ bool isSparse() ;
      virtual /* override */ std::shared_ptr< monty::ndarray< double,1 > > getDataAsArray() ;
      virtual /* override */ void getDataAsTriplets(std::shared_ptr< monty::ndarray< int32_t,1 > > _8054_subi,std::shared_ptr< monty::ndarray< int32_t,1 > > _8055_subj,std::shared_ptr< monty::ndarray< double,1 > > _8056_cof) ;
      virtual /* override */ double get(int32_t _8060_i,int32_t _8061_j) ;
      virtual /* override */ int64_t numNonzeros() ;
    }; // struct DenseMatrix;

    struct p_SparseMatrix : public ::mosek::fusion::p_Matrix
    {
      SparseMatrix * _pubthis;
      static mosek::fusion::p_SparseMatrix* _get_impl(mosek::fusion::SparseMatrix * _inst){ return static_cast< mosek::fusion::p_SparseMatrix* >(mosek::fusion::p_Matrix::_get_impl(_inst)); }
      static mosek::fusion::p_SparseMatrix * _get_impl(mosek::fusion::SparseMatrix::t _inst) { return _get_impl(_inst.get()); }
      p_SparseMatrix(SparseMatrix * _pubthis);
      virtual ~p_SparseMatrix() { /* std::cout << "~p_SparseMatrix" << std::endl;*/ };
      int64_t nnz{};
      std::shared_ptr< monty::ndarray< double,1 > > val{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > subj{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > subi{};

      virtual void destroy();

      static SparseMatrix::t _new_SparseMatrix(int32_t _8062_dimi_,int32_t _8063_dimj_,std::shared_ptr< monty::ndarray< int32_t,1 > > _8064_subi_,std::shared_ptr< monty::ndarray< int32_t,1 > > _8065_subj_,std::shared_ptr< monty::ndarray< double,1 > > _8066_val_,int64_t _8067_nelm);
      void _initialize(int32_t _8062_dimi_,int32_t _8063_dimj_,std::shared_ptr< monty::ndarray< int32_t,1 > > _8064_subi_,std::shared_ptr< monty::ndarray< int32_t,1 > > _8065_subj_,std::shared_ptr< monty::ndarray< double,1 > > _8066_val_,int64_t _8067_nelm);
      static SparseMatrix::t _new_SparseMatrix(int32_t _8073_dimi_,int32_t _8074_dimj_,std::shared_ptr< monty::ndarray< int32_t,1 > > _8075_subi_,std::shared_ptr< monty::ndarray< int32_t,1 > > _8076_subj_,std::shared_ptr< monty::ndarray< double,1 > > _8077_val_);
      void _initialize(int32_t _8073_dimi_,int32_t _8074_dimj_,std::shared_ptr< monty::ndarray< int32_t,1 > > _8075_subi_,std::shared_ptr< monty::ndarray< int32_t,1 > > _8076_subj_,std::shared_ptr< monty::ndarray< double,1 > > _8077_val_);
      virtual std::shared_ptr< monty::ndarray< int64_t,1 > > formPtrb() ;
      virtual /* override */ std::string toString() ;
      virtual /* override */ int64_t numNonzeros() ;
      virtual /* override */ monty::rc_ptr< ::mosek::fusion::Matrix > __mosek_2fusion_2SparseMatrix__transpose() ;
      virtual monty::rc_ptr< ::mosek::fusion::Matrix > __mosek_2fusion_2Matrix__transpose() { return __mosek_2fusion_2SparseMatrix__transpose(); }
      virtual /* override */ bool isSparse() ;
      virtual /* override */ std::shared_ptr< monty::ndarray< double,1 > > getDataAsArray() ;
      virtual /* override */ void getDataAsTriplets(std::shared_ptr< monty::ndarray< int32_t,1 > > _8089_subi_,std::shared_ptr< monty::ndarray< int32_t,1 > > _8090_subj_,std::shared_ptr< monty::ndarray< double,1 > > _8091_cof_) ;
      virtual /* override */ double get(int32_t _8092_i,int32_t _8093_j) ;
    }; // struct SparseMatrix;

    struct p_LinkedBlocks
    {
      LinkedBlocks * _pubthis;
      static mosek::fusion::p_LinkedBlocks* _get_impl(mosek::fusion::LinkedBlocks * _inst){ assert(_inst); assert(_inst->_impl); return _inst->_impl; }
      static mosek::fusion::p_LinkedBlocks * _get_impl(mosek::fusion::LinkedBlocks::t _inst) { return _get_impl(_inst.get()); }
      p_LinkedBlocks(LinkedBlocks * _pubthis);
      virtual ~p_LinkedBlocks() { /* std::cout << "~p_LinkedBlocks" << std::endl;*/ };
      std::shared_ptr< monty::ndarray< int32_t,1 > > bfirst{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > bsize{};
      monty::rc_ptr< ::mosek::fusion::LinkedInts > blocks{};
      monty::rc_ptr< ::mosek::fusion::LinkedInts > ints{};

      virtual void destroy();

      static LinkedBlocks::t _new_LinkedBlocks();
      void _initialize();
      static LinkedBlocks::t _new_LinkedBlocks(int32_t _8271_n);
      void _initialize(int32_t _8271_n);
      static LinkedBlocks::t _new_LinkedBlocks(monty::rc_ptr< ::mosek::fusion::LinkedBlocks > _8272_other);
      void _initialize(monty::rc_ptr< ::mosek::fusion::LinkedBlocks > _8272_other);
      virtual void free(int32_t _8273_bkey) ;
      virtual int32_t alloc(int32_t _8275_size) ;
      virtual int32_t maxidx(int32_t _8280_bkey) ;
      virtual int32_t numallocated() ;
      virtual void get(int32_t _8281_bkey,std::shared_ptr< monty::ndarray< int32_t,1 > > _8282_target,int32_t _8283_offset) ;
      virtual int32_t numblocks() ;
      virtual int32_t blocksize(int32_t _8284_bkey) ;
      virtual int32_t block_capacity() ;
      virtual int32_t capacity() ;
      virtual bool validate() ;
    }; // struct LinkedBlocks;

    struct p_LinkedInts
    {
      LinkedInts * _pubthis;
      static mosek::fusion::p_LinkedInts* _get_impl(mosek::fusion::LinkedInts * _inst){ assert(_inst); assert(_inst->_impl); return _inst->_impl; }
      static mosek::fusion::p_LinkedInts * _get_impl(mosek::fusion::LinkedInts::t _inst) { return _get_impl(_inst.get()); }
      p_LinkedInts(LinkedInts * _pubthis);
      virtual ~p_LinkedInts() { /* std::cout << "~p_LinkedInts" << std::endl;*/ };
      int32_t nfree{};
      int32_t last_free{};
      int32_t first_free{};
      int32_t first_used{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > prev{};
      std::shared_ptr< monty::ndarray< int32_t,1 > > next{};

      virtual void destroy();

      static LinkedInts::t _new_LinkedInts(int32_t _8285_cap_);
      void _initialize(int32_t _8285_cap_);
      static LinkedInts::t _new_LinkedInts();
      void _initialize();
      static LinkedInts::t _new_LinkedInts(monty::rc_ptr< ::mosek::fusion::LinkedInts > _8288_other);
      void _initialize(monty::rc_ptr< ::mosek::fusion::LinkedInts > _8288_other);
      virtual void free(int32_t _8289_i,int32_t _8290_num) ;
      virtual int32_t alloc() ;
      virtual int32_t alloc(int32_t _8296_n) ;
      virtual void alloc(int32_t _8297_num,std::shared_ptr< monty::ndarray< int32_t,1 > > _8298_target,int32_t _8299_offset) ;
      virtual void get(int32_t _8302_i,int32_t _8303_num,std::shared_ptr< monty::ndarray< int32_t,1 > > _8304_target,int32_t _8305_offset) ;
      virtual int32_t numallocated() ;
      virtual int32_t maxidx(int32_t _8308_i,int32_t _8309_num) ;
      virtual int32_t allocblock(int32_t _8313_num) ;
      virtual void recap(int32_t _8319_ncap) ;
      virtual int32_t capacity() ;
      virtual bool validate() ;
    }; // struct LinkedInts;

    struct p_Parameters
    {
      Parameters * _pubthis;
      static mosek::fusion::p_Parameters* _get_impl(mosek::fusion::Parameters * _inst){ assert(_inst); assert(_inst->_impl); return _inst->_impl; }
      static mosek::fusion::p_Parameters * _get_impl(mosek::fusion::Parameters::t _inst) { return _get_impl(_inst.get()); }
      p_Parameters(Parameters * _pubthis);
      virtual ~p_Parameters() { /* std::cout << "~p_Parameters" << std::endl;*/ };

      virtual void destroy();

      static  void setParameter(monty::rc_ptr< ::mosek::fusion::Model > _8328_M,const std::string &  _8329_name,double _8330_value);
      static  void setParameter(monty::rc_ptr< ::mosek::fusion::Model > _8428_M,const std::string &  _8429_name,int32_t _8430_value);
      static  void setParameter(monty::rc_ptr< ::mosek::fusion::Model > _8528_M,const std::string &  _8529_name,const std::string &  _8530_value);
      static  int32_t string_to_variabletype_value(const std::string &  _8782_v);
      static  int32_t string_to_value_value(const std::string &  _8783_v);
      static  int32_t string_to_streamtype_value(const std::string &  _8784_v);
      static  int32_t string_to_startpointtype_value(const std::string &  _8785_v);
      static  int32_t string_to_stakey_value(const std::string &  _8786_v);
      static  int32_t string_to_sparam_value(const std::string &  _8787_v);
      static  int32_t string_to_solveform_value(const std::string &  _8788_v);
      static  int32_t string_to_soltype_value(const std::string &  _8789_v);
      static  int32_t string_to_solsta_value(const std::string &  _8790_v);
      static  int32_t string_to_solitem_value(const std::string &  _8791_v);
      static  int32_t string_to_simseltype_value(const std::string &  _8792_v);
      static  int32_t string_to_sensitivitytype_value(const std::string &  _8793_v);
      static  int32_t string_to_scalingmethod_value(const std::string &  _8794_v);
      static  int32_t string_to_scalingtype_value(const std::string &  _8795_v);
      static  int32_t string_to_rescodetype_value(const std::string &  _8796_v);
      static  int32_t string_to_rescode_value(const std::string &  _8797_v);
      static  int32_t string_to_xmlwriteroutputtype_value(const std::string &  _8798_v);
      static  int32_t string_to_prosta_value(const std::string &  _8799_v);
      static  int32_t string_to_problemtype_value(const std::string &  _8800_v);
      static  int32_t string_to_problemitem_value(const std::string &  _8801_v);
      static  int32_t string_to_parametertype_value(const std::string &  _8802_v);
      static  int32_t string_to_presolvemode_value(const std::string &  _8803_v);
      static  int32_t string_to_orderingtype_value(const std::string &  _8804_v);
      static  int32_t string_to_optimizertype_value(const std::string &  _8805_v);
      static  int32_t string_to_onoffkey_value(const std::string &  _8806_v);
      static  int32_t string_to_objsense_value(const std::string &  _8807_v);
      static  int32_t string_to_mpsformat_value(const std::string &  _8808_v);
      static  int32_t string_to_mionodeseltype_value(const std::string &  _8809_v);
      static  int32_t string_to_miomode_value(const std::string &  _8810_v);
      static  int32_t string_to_miocontsoltype_value(const std::string &  _8811_v);
      static  int32_t string_to_miodatapermmethod_value(const std::string &  _8812_v);
      static  int32_t string_to_miqcqoreformmethod_value(const std::string &  _8813_v);
      static  int32_t string_to_branchdir_value(const std::string &  _8814_v);
      static  int32_t string_to_iparam_value(const std::string &  _8815_v);
      static  int32_t string_to_iomode_value(const std::string &  _8816_v);
      static  int32_t string_to_internal_iinf_value(const std::string &  _8817_v);
      static  int32_t string_to_internal_dinf_value(const std::string &  _8818_v);
      static  int32_t string_to_inftype_value(const std::string &  _8819_v);
      static  int32_t string_to_iinfitem_value(const std::string &  _8820_v);
      static  int32_t string_to_internal_liinf_value(const std::string &  _8821_v);
      static  int32_t string_to_liinfitem_value(const std::string &  _8822_v);
      static  int32_t string_to_dparam_value(const std::string &  _8823_v);
      static  int32_t string_to_feature_value(const std::string &  _8824_v);
      static  int32_t string_to_dinfitem_value(const std::string &  _8825_v);
      static  int32_t string_to_solformat_value(const std::string &  _8826_v);
      static  int32_t string_to_dataformat_value(const std::string &  _8827_v);
      static  int32_t string_to_symmattype_value(const std::string &  _8828_v);
      static  int32_t string_to_nametype_value(const std::string &  _8829_v);
      static  int32_t string_to_domaintype_value(const std::string &  _8830_v);
      static  int32_t string_to_conetype_value(const std::string &  _8831_v);
      static  int32_t string_to_compresstype_value(const std::string &  _8832_v);
      static  int32_t string_to_checkconvexitytype_value(const std::string &  _8833_v);
      static  int32_t string_to_callbackcode_value(const std::string &  _8834_v);
      static  int32_t string_to_purify_value(const std::string &  _8835_v);
      static  int32_t string_to_intpnthotstart_value(const std::string &  _8836_v);
      static  int32_t string_to_simhotstart_value(const std::string &  _8837_v);
      static  int32_t string_to_simdupvec_value(const std::string &  _8838_v);
      static  int32_t string_to_simreform_value(const std::string &  _8839_v);
      static  int32_t string_to_uplo_value(const std::string &  _8840_v);
      static  int32_t string_to_transpose_value(const std::string &  _8841_v);
      static  int32_t string_to_simdegen_value(const std::string &  _8842_v);
      static  int32_t string_to_mark_value(const std::string &  _8843_v);
      static  int32_t string_to_boundkey_value(const std::string &  _8844_v);
      static  int32_t string_to_basindtype_value(const std::string &  _8845_v);
      static  int32_t string_to_language_value(const std::string &  _8846_v);
    }; // struct Parameters;

  }
}
namespace mosek
{
  namespace fusion
  {
    namespace Utils
    {
      // mosek.fusion.Utils.IntMap from file 'src/fusion/cxx/IntMap_p.h'
      struct p_IntMap
      {
        IntMap * _pubself;
      
        static p_IntMap * _get_impl(IntMap * _inst) { return _inst->_impl.get(); }
      
        p_IntMap(IntMap * _pubself) : _pubself(_pubself) {}
      
        static IntMap::t _new_IntMap() { return new IntMap(); }
      
        ::std::unordered_map<int64_t,int> m;
      
        bool hasItem (int64_t key) { return m.find(key) != m.end(); }
        int  getItem (int64_t key) { return m.find(key)->second; } // will probably throw something or crash of no such key
        void setItem (int64_t key, int val) { m[key] = val; }
      
        std::shared_ptr<monty::ndarray<int64_t,1>> keys()
        {
          size_t size = m.size();
          auto res = std::shared_ptr<monty::ndarray<int64_t,1>>(new monty::ndarray<int64_t,1>(monty::shape((int)size)));
      
          ptrdiff_t i = 0;
          for (auto it = m.begin(); it != m.end(); ++it)
            (*res)[i++] = it->first;
      
          return res;
        }
      
        std::shared_ptr<monty::ndarray<int,1>> values()
        {
          size_t size = m.size();
          auto res = std::shared_ptr<monty::ndarray<int,1>>(new monty::ndarray<int,1>(monty::shape((int)size)));
      
          ptrdiff_t i = 0;
          for (auto it = m.begin(); it != m.end(); ++it)
            (*res)[i++] = it->second;
      
          return res;
        }
      
        IntMap::t clone();
        IntMap::t __mosek_2fusion_2Utils_2IntMap__clone();
      };
      
      
      
      struct p_StringIntMap
      {
        StringIntMap * _pubself;
      
        static p_StringIntMap * _get_impl(StringIntMap * _inst) { return _inst->_impl.get(); }
      
        p_StringIntMap(StringIntMap * _pubself) : _pubself(_pubself) {}
      
        static StringIntMap::t _new_StringIntMap() { return new StringIntMap(); }
      
        ::std::unordered_map<std::string,int> m;
      
        bool hasItem (const std::string & key) { return m.find(key) != m.end(); }
        int  getItem (const std::string & key) { return m.find(key)->second; } // will probably throw something or crash of no such key
        void setItem (const std::string & key, int val) { m[key] = val; }
      
        std::shared_ptr<monty::ndarray<std::string,1>> keys()
        {
          size_t size = m.size();
          auto res = std::shared_ptr<monty::ndarray<std::string,1>>(new monty::ndarray<std::string,1>(monty::shape((int)size)));
      
          ptrdiff_t i = 0;
          for (auto it = m.begin(); it != m.end(); ++it)
            (*res)[i++] = it->first;
      
          return res;
        }
      
        std::shared_ptr<monty::ndarray<int,1>> values()
        {
          size_t size = m.size();
          auto res = std::shared_ptr<monty::ndarray<int,1>>(new monty::ndarray<int,1>(monty::shape((int)size)));
      
          ptrdiff_t i = 0;
          for (auto it = m.begin(); it != m.end(); ++it)
            (*res)[i++] = it->second;
      
          return res;
        }
      
        StringIntMap::t clone();
        StringIntMap::t __mosek_2fusion_2Utils_2StringIntMap__clone();
      };
      // End of file 'src/fusion/cxx/IntMap_p.h'
      // mosek.fusion.Utils.StringBuffer from file 'src/fusion/cxx/StringBuffer_p.h'
      // namespace mosek::fusion::Utils
      struct p_StringBuffer
      {
        StringBuffer * _pubthis;
        std::stringstream ss;
      
        p_StringBuffer(StringBuffer * _pubthis) : _pubthis(_pubthis) {}
      
        static p_StringBuffer * _get_impl(StringBuffer::t ptr) { return ptr->_impl.get(); }
        static p_StringBuffer * _get_impl(StringBuffer * ptr) { return ptr->_impl.get(); }
      
        static StringBuffer::t _new_StringBuffer() { return new StringBuffer(); }
      
        StringBuffer::t clear ();
      
        StringBuffer::t a (const monty::ndarray<std::string,1> & val);
        StringBuffer::t a (const monty::ndarray<int,1> & val);
        StringBuffer::t a (const monty::ndarray<int64_t,1> & val);
        StringBuffer::t a (const monty::ndarray<double,1> & val);
      
      
        StringBuffer::t a (const int & val);
        StringBuffer::t a (const int64_t & val);
        StringBuffer::t a (const double & val);
        StringBuffer::t a (const bool & val);
        StringBuffer::t a (const std::string & val);
      
        StringBuffer::t lf ();
        StringBuffer::t __mosek_2fusion_2Utils_2StringBuffer__clear ();
      
        StringBuffer::t __mosek_2fusion_2Utils_2StringBuffer__a (const monty::ndarray<std::string,1> & val);
        StringBuffer::t __mosek_2fusion_2Utils_2StringBuffer__a (const monty::ndarray<int,1> & val);
        StringBuffer::t __mosek_2fusion_2Utils_2StringBuffer__a (const monty::ndarray<int64_t,1> & val);
        StringBuffer::t __mosek_2fusion_2Utils_2StringBuffer__a (const monty::ndarray<double,1> & val);
      
        StringBuffer::t __mosek_2fusion_2Utils_2StringBuffer__a (const int & val);
        StringBuffer::t __mosek_2fusion_2Utils_2StringBuffer__a (const int64_t & val);
        StringBuffer::t __mosek_2fusion_2Utils_2StringBuffer__a (const double & val);
        StringBuffer::t __mosek_2fusion_2Utils_2StringBuffer__a (const bool & val);
        StringBuffer::t __mosek_2fusion_2Utils_2StringBuffer__a (const std::string & val);
      
        StringBuffer::t __mosek_2fusion_2Utils_2StringBuffer__lf ();
      
        std::string toString () const;
      };
      // End of file 'src/fusion/cxx/StringBuffer_p.h'
    }
  }
}
#endif
