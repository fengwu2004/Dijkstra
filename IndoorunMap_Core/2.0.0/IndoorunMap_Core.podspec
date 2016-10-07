Pod::Spec.new do |s|

  s.name         = "IndoorunMap_Core"
  s.version      = "2.0.0"
  s.summary      = "Yellfun's offical indoor map SDK"
  s.description  = "Yellfun SDK for indoor map and locating" 
  s.homepage     = "https://github.com/fengwu2004/WordFaster"
  s.license      = { :type => "Copyright", :text => "Copyright 2013 - 2016 Indoorun.com. All rights reserved" }
  s.author       = { "yl" => "yanli@yellfun.com" }
  s.platform     = :ios, "8.0"
  s.source       = { :http =>"http://localhost:3000/IndoorunMap_Core.framework.zip"}
  s.requires_arc = true
  s.vendored_frameworks = 'IndoorunMap_Core.framework'
 
end