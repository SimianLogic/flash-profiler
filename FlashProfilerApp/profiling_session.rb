class ProfilingSession < NSDocument
  attr_accessor :agent

  def initWithAgent(agent)
    init
    
    @agent = agent
    
    self
  end

  def windowNibName
    # Implement this to return a nib to load OR implement
    # -makeWindowControllers to manually create your controllers.
    return "ProfilingSession"
  end

end
